/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 07:10:51 by hrazafia          #+#    #+#             */
/*   Updated: 2025/02/25 13:16:30 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Input.hpp"

std::string	Input::getString(const std::string &prompt)
{
	std::string input;

	std::cout << prompt;
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		std::exit(0);
	}
	return (cleanWhitespace(input));
}

bool	Input::getInt(int *value, const std::string &prompt)
{
	std::string	input;

	input = getString(prompt);
	if (isNumeric(input) && isValidSize(input))
	{
		*value = std::atoi(input.c_str());
		return (true);
	}
	return (false);
}

std::string	Input::cleanWhitespace(const std::string &value)
{
	size_t		len;
	size_t		space;
	std::string	result;
	std::string	temp;

	if (value.empty())
		return (result);
	temp = trimSpace(value);
	len = temp.length();
	space = 0;
	while (std::isspace(temp[space]))
		space++;
	if (space == len)
		return (result);
	for (size_t i = 0; i < len; i++)
	{
		if (std::isspace(temp[i]))
			result += " ";
		while ((i < len) && std::isspace(temp[i]))
			i++;
		result += temp[i];
	}
	return (result);
}

std::string	Input::trimSpace(const std::string &value)
{
	size_t	start = 0;
	size_t	end = value.length() - 1;

	while ((start < end) && std::isspace(value[start]))
		start++;
	while ((end > start) && std::isspace(value[end]))
		end--;
	return (value.substr(start, end - start + 1));
}

bool	Input::isNumeric(const std::string &value)
{
	size_t	i = 0;
	size_t	len = value.length();

	while ((i < len) && (std::isspace(value[i])))
		i++;
	if ((value[i] == '-') || (value[i] == '+'))
		i++;
	if (std::isdigit(value[i]))
	{
		while (std::isdigit(value[i]))
			i++;
	}
	else
		return (false);
	while (std::isspace(value[i]))
		i++;
	if (i == len)
		return (true);
	return (false);
}

bool	Input::isValidSize(const std::string &value)
{
	size_t	i = 0;
	int					sigle = 1;
	unsigned long long	nbr = 0;

	while (std::isspace(value[i]))
		i++;
	if ((value[i] == '-') || (value[i] == '+'))
	{
		if (value[i] == '-')
			sigle = -1;
		i++;
	}
	if (std::isdigit(value[i]))
	{
		while (std::isdigit(value[i]))
		{
			nbr = (nbr * 10) + (value[i] - '0');
			if ((sigle == 1 && nbr > (unsigned long long) LONG_MAX)
				|| (sigle == -1 && nbr > ((unsigned long long) LONG_MAX + 1)))
				return (false);
			i++;
		}
		return (true);
	}
	return (false);
}
