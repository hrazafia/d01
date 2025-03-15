/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:21:32 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/15 13:33:55 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	one(int a, int b)
{
	std::cout << a + b << std::endl;
}

void	two(int a, int b)
{
	std::cout << a * b << std::endl;
}

int	main(void)
{
	void	(*fptr[2])(int, int);

	fptr[0] = one;
	fptr[1] = two;

	fptr[0](12, 3);
	fptr[1](5, 4);
	fptr[1](4, 4);

	return (0);
}
