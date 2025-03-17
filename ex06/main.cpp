/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:36:50 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/17 07:28:23 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "One level complain is required" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}
