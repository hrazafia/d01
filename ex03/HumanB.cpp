/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 07:52:09 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/08 07:52:10 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name): weaponPtr(NULL)
{
	this->name = name;
}

void	HumanB::attack(void)
{
	if (weaponPtr == NULL)
		std::cout << name << " attacks" << std::endl;
	else
		std::cout << name << " attacks with their " << weaponPtr->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	weaponPtr = &weapon;
}
