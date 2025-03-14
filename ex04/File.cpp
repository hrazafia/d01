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

File::File(std::string filename)
{
	this->filename = filename;
	this->ifs.open(filename.c_str(), std::ifstream::in);
	this->ofs.open(filename.append(".replace").c_str(), std::ofstream::out);
}

File::~File(void)
{
	this->ifs.close();
	this->ofs.close();
}

void	File::replaceContent(const std::string &s1, const std::string &s2)
{
	std::string	line;

	if (ifs.is_open() && ofs.is_open())
	{
		while (getline(ifs, line))
		{
			lineReplace(line, s1, s2);
			ofs << line;
			if (ifs.eof() == false)
			{
				ofs << std::endl;
			}
		}
	}
	else if (ifs.is_open() == false)
	{
		std::cout << "cannot open \"" << filename << "\""<< std::endl;
	}
	else if (ofs.is_open() == false)
	{
		std::cout << "cannot open \"" << filename + ".replace\"" << std::endl;
	}
}

void	File::lineReplace(std::string &line, const std::string &s1, const std::string &s2)
{
		size_t	pos = 0;
		size_t	offset = 0;

		pos = line.find(s1, offset);
		while (pos != line.npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			offset = pos + s2.length();
			pos = line.find(s1, offset);
		}
}
