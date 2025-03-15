/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:21:32 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/15 14:34:05 by hrazafia         ###   ########.fr       */
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

	int	(Number::*NumberPtr[2])(void);

	NumberPtr[0] = &Number::one;
	NumberPtr[1] = &Number::two;

	std::cout << (object.*NumberPtr[0])() << std::endl;
	std::cout << (object.*NumberPtr[1])() << std::endl;
	return (0);
}
