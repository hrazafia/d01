/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 07:52:14 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/08 07:52:15 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

int	main(void)
{
	Weapon	club = Weapon("crude spiked club");

	std::cout << club.getType() << std::endl;
	return (0);
}
