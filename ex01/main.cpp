/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 07:59:16 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/13 10:01:32 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "zombieHorde.hpp"

void	test1(void)
{
	Zombie	*horde;
	int		n = 16;

	horde = zombieHorde(n, "Foo");
	if (horde == NULL)
	{
		std::cout << "No zombie horde" << std::endl;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			horde[i].announce();
		}
		delete[] horde;
	}
}

void	test2(void)
{
	Zombie	*horde;

	horde = zombieHorde(-1, "Foo");
	if (horde == NULL)
	{
		std::cout << "No zombie horde" << std::endl;
	}
	else
	{
		std::cout << "Test fail" << std::endl; 
		delete[] horde;
	}
	
	horde = zombieHorde(0, "Foo");
	if (horde == NULL)
	{
		std::cout << "No zombie horde" << std::endl;
	}
	else
	{
		std::cout << "Test fail" << std::endl; 
		delete[] horde;
	}
}

int	main(void)
{
	std::cout << "====================Test 1====================" << std::endl;
	test1();
	
	std::cout << "====================Test 2====================" << std::endl;
	test2();
	return (0);
}
