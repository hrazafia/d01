/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 22:10:56 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/14 22:10:57 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(const std::string &name)
{
	this->name = name;
}

void	File::replaceContent(const std::string &s1, const std::string &s2)
{
	std::string	line;
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string	filename;

	filename = this->name;
	ifs.open(filename.c_str(), std::ifstream::in);
	if (ifs.is_open() == false)
	{
		std::cout << "Cannot open \"" << filename << "\""<< std::endl;
		return ;
	}
	ofs.open(filename.append(".replace").c_str(), std::ofstream::out | std::ofstream::trunc);
	if (ofs.is_open() == false)
	{
		ifs.close();
		std::cout << "Cannot open \"" << filename << "\""<< std::endl;
		return ;
	}
	while (getline(ifs, line))
	{
		lineReplace(line, s1, s2);
		ofs << line;
		if (ifs.eof() == false)
			ofs << std::endl;
	}
	ifs.close();
	ofs.close();
}

void	File::lineReplace(std::string &line, const std::string &s1, const std::string &s2)
{
		size_t	pos = 0;
		size_t	offset = 0;

		if (line.empty() || s1.empty())
			return ;
		pos = line.find(s1, offset);
		while (pos != line.npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			offset = pos + s2.length();
			pos = line.find(s1, offset);
		}
}
