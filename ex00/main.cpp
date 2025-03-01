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

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	std::string	name;
	Zombie		*zombie;

	std::cout << "Enter a name of Zombie: ";
	std::getline(std::cin, name);
	zombie = newZombie(name);
	if (zombie != NULL)
	{
		zombie->announce();
		delete zombie;
	}
	std::cout << "Enter an other name of Zombie: ";
	std::getline(std::cin, name);
	randomChump(name);
	return (0);
}
