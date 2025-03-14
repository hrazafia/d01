/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 22:10:49 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/14 22:10:50 by hrazafia         ###   ########.fr       */
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
		std::ifstream	ifs;
		std::ofstream	ofs;
		std::string		filename;

	public:
				File(std::string filename);
				~File(void);
		void	replaceContent(const std::string &s1, const std::string &s2);
		void	lineReplace(std::string &line, const std::string &s1, const std::string &s2);
};

#endif
