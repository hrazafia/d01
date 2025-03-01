/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 07:59:16 by hrazafia          #+#    #+#             */
/*   Updated: 2025/02/10 08:17:00 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "utils.hpp"

int	main(void)
{
	int		n = 0;
	std::string	name = "";
	Zombie		*zombie;

	std::cout << "Enter number of Zombie: ";
	std::cin >> n;
	std::cin.ignore();

	for (int i = 0; i < n; i++)
	{
		std::cout << "Name the Zombie: ";
		std::getline(std::cin, name);
		zombie = newZombie(name);
		if (zombie)
			zombie->announce();
		if (zombie)
			delete zombie;
	}
	return (0);
}
