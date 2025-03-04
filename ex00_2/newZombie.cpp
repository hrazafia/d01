/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 08:08:31 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/04 11:13:58 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "newZombie.hpp"

Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}
