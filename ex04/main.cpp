/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:50:24 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/17 07:27:56 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "File.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Three parameters are required" << std::endl;
		return (1);
	}
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	std::string	filename = argv[1];

	File	file(filename);
	file.replaceContent(s1, s2);
	return (0);
}
