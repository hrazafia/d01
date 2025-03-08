/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Input.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 07:10:51 by hrazafia          #+#    #+#             */
/*   Updated: 2025/02/25 13:16:18 by hrazafia         ###   ########.fr       */
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
		static std::string	getString(const std::string &prompt);
		static bool			getInt(int *value, const std::string &prompt);

	private:
		static std::string	trimSpace(const std::string &value);
		static std::string	cleanWhitespace(const std::string &value);
		static bool	isNumeric(const std::string &value);
		static bool	isValidSize(const std::string &value);
};

#endif
