/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 07:56:40 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/04 11:14:19 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "randomChump.hpp"

void randomChump(std::string name)
{
	Zombie	zombie(name);

	zombie.announce();
}
