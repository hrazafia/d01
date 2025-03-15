/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:21:32 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/15 13:30:45 by hrazafia         ###   ########.fr       */
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
	void	(*fptr)(int, int);

	fptr = one;
	fptr(12, 3);

	fptr = two;
	fptr(5, 4);

	return (0);
}
