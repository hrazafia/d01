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

#include "Zombie.hpp"
#include "utils.hpp"

int	main(void)
{
	Zombie	*zombie;

	zombie = newZombie("Raliva");
	if (zombie)
		zombie->announce();
	if (zombie)
		delete zombie;
	return (0);
}
