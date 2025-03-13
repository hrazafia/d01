/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 08:08:31 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/13 09:17:34 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "newZombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie(name);
	return (zombie);
}
