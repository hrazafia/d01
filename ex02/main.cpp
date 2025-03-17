/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 07:21:08 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/17 07:27:07 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	msg = "HI THIS IS BRAIN";
	std::string	*stringPTR = &msg;
	std::string	&stringREF = msg;

	std::cout << "The memory address of the string variable: " << &msg << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory adderss held by stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable: " << msg << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}
