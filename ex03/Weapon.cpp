/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 07:52:16 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/17 07:27:35 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
	this->type = type;
}

const std::string&	Weapon::getType(void) const
{
	return (type);
}

void	Weapon::setType(const std::string &type)
{
	this->type = type;
}
