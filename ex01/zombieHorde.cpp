/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 08:43:09 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/17 07:26:57 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*horde;

	if (N <= 0)
		return (NULL);
	horde = new Zombie[N];
	if (horde == NULL)
		return (NULL);
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
