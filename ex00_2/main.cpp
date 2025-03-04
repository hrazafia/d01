/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 07:59:16 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/04 11:11:54 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "newZombie.hpp"
#include "randomChump.hpp"
#include "Zombie.hpp"

int	main(void)
{
	Zombie		*zombie;

	randomChump("Foo");
	zombie = newZombie("Bar");
	if (zombie != NULL)
	{
		zombie->announce();
		delete zombie;
	}
	return (0);
}
