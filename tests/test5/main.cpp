/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:50:24 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/13 12:17:16 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(void)
{
	std::ifstream	ifs;
	std::string		line;

	ifs.open("out.txt", std::ifstream::in);
	if (ifs.is_open())
	{
		while (getline(ifs, line))
		{
			std::cout << line;
			if (ifs.eof() == false)
				std::cout << std::endl;
		}
		ifs.close();
	}
	else
	{
		std::cout << "Error opening file" << std::endl;
	}	
	return (0);
}

/*
void	strReplace(std::string &str, const std::string &substr, const std::string &newstr)
{
	size_t	pos = 0;
	size_t	offset = 0;

	pos = str.find(substr, offset);
	while (pos != str.npos)
	{
		str.erase(pos, substr.length());
		str.insert(pos, newstr);
		offset = pos + newstr.length();
		pos = str.find(substr, offset);
	}
}


int	main(int argc, char **argv)
{
	std::string	line;
	
	if (argc != 4)
	{
		std::cout << "Three parameters are required" << std::endl;
		return (1);
	}
	line = argv[1];
	strReplace(line, argv[2], argv[3]);
	std::cout << line << std::endl;
	return (0);
}*/
