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
#include "Input.hpp"
#include "newZombie.hpp"
#include "randomChump.hpp"
#include "Zombie.hpp"

int	main(void)
{
	std::string	name;
	Zombie		*zombie;

	name = Input::getString("Enter a zombie name: ");
	randomChump(name);
	name = Input::getString("Enter another zombie name: ");
	zombie = newZombie(name);
	if (zombie != NULL)
	{
		zombie->announce();
		delete zombie;
	}
	return (0);
}
