/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 07:52:02 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/08 07:52:04 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon): weaponRef(weapon)
{
	this->name = name;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weaponRef.getType() << std::endl;
}
