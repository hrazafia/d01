/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 07:59:16 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/01 10:35:12 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int	main(void)
{
	std::string	name;
	Zombie		*newZombie;
	Zombie		zombie("Foo");

	zombie.announce();
	std::cout << "Enter a name of Zombie: ";
	std::getline(std::cin, name);
	newZombie = zombie.newZombie(name);
	if (newZombie)
	{
		newZombie->announce();
		delete newZombie;
	}
	std::cout << "Enter an other name of Zombie: ";
	std::getline(std::cin, name);
	zombie.randomChump(name);
	return (0);
}
