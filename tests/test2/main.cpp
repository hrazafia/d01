/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:50:24 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/13 10:59:58 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(void)
{
	std::ofstream	ofs;

	ofs.open("test.txt");
	if (ofs.is_open())
	{
		ofs << "lorem ipsum Livasoa";
		std::cout << "Output operation successfully performed" << std::endl;
		ofs.close();
	}
	else
	{
		std::cout << "Error opening file" << std::endl;
	}
	return (0);
}
