/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:21:32 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/15 13:48:03 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Number
{
	private:
		int	i;

	public:
			Number(void);
		int	one(void);
		int	two(void);
};

Number::Number(void): i(0)
{

}

int	Number::one(void)
{
	return (i + 1);
}

int	Number::two(void)
{
	return (i + 2);
}

int	main(void)
{
	Number	object;

	int	(Number::*NumberPtr)(void);

	NumberPtr = &Number::one;
	std::cout << (object.*NumberPtr)() << std::endl;

	NumberPtr = &Number::two;
	std::cout << (object.*NumberPtr)() << std::endl;
	return (0);
}
