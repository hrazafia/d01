/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 22:10:49 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/17 07:27:52 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

# include <iostream>
# include <string>
# include <fstream>

class	File
{
	private:
		std::string		name;

	public:
				File(const std::string &name);
		void	replaceContent(const std::string &s1, const std::string &s2);
		void	lineReplace(std::string &line, const std::string &s1, const std::string &s2);
};

#endif
