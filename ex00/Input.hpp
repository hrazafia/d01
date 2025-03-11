/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Input.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:11:07 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/11 07:48:55 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_HPP
# define INPUT_HPP

#include <iostream>
#include <climits>
#include <cstdlib>
#include <string>

class Input
{
	public:
		static bool			getString(std::string &input, const std::string &prompt);
		static bool			getInt(int &value, const std::string &prompt, bool &isnum);

	private:
		static std::string	trimSpace(const std::string &value);
		static std::string	cleanWhitespace(const std::string &value);
		static bool	isNumeric(const std::string &value);
		static bool	isValidSize(const std::string &value);
};

#endif
