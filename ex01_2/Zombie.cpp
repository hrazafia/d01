/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 07:53:26 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/01 11:18:29 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void): _name("zombie")
{

}

Zombie::~Zombie(void)
{
	std::cout << _name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName(void) const
{
	return (_name);
}

void	Zombie::setName(std::string name)
{
	_name = name;
}

Zombie*	Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*zombieHorde;

	if (N <= 0)
		return (NULL);
	zombieHorde = new Zombie[N];
	if (zombieHorde == NULL)
		return (NULL);
	for (int i = 0; i < N; i++)
	{
		zombieHorde[i].setName(name);
	}
	return (zombieHorde);
}
