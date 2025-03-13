/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:50:24 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/13 11:29:00 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(void)
{
	std::ifstream	ifs;

	ifs.open("file.txt", std::ifstream::in);

	if (ifs.is_open())
	{
		std::cout << "File is opended" << std::endl;
		ifs.close();
	}
	else
	{
		std::cout << "Error opening file" << std::endl;
	}
	return (0);
}
