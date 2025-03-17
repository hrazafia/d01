/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 07:56:40 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/17 07:26:26 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "randomChump.hpp"

void randomChump(std::string name)
{
	Zombie	zombie(name);
	zombie.announce();
}
