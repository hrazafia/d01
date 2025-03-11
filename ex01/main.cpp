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
#include "zombieHorde.hpp"
#include "Input.hpp"

int	main(void)
{
	int	n = 0;
	std::string	name;
	Zombie	*horde;
	bool	isnum;

	if (!Input::getInt(n, "Enter the number of the zombie horde: ", isnum))
		return (1);
	while (isnum == false)
	{
		std::cout << "Invalid input." << std::endl;
		if (!Input::getInt(n, "Enter the number of the zombie horde: ", isnum))
			return (1);
	}
	if (!Input::getString(name, "Enter the zombie horde name: "))
		return (1);
	horde = zombieHorde(n, name);
	if (horde == NULL)
		return (0);
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
