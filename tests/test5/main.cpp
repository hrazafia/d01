/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:50:24 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/13 11:29:00 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	name = "Herinirina";
	
	std::cout << name << std::endl;
	name.append(" Livasoa");
	std::cout << name << std::endl;
	return (0);
}
