/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 07:59:16 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/13 09:38:08 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "newZombie.hpp"
#include "randomChump.hpp"
#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;

	std::cout << "====================Test 1====================" << std::endl;
	randomChump("Foo");

	std::cout << "====================Test 2====================" << std::endl;
	zombie = newZombie("Bar");
	if (zombie != NULL)
	{
		zombie->announce();
		delete zombie;
	}
	return (0);
}
