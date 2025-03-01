/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 07:47:49 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/01 11:13:54 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	_name;

	public:
					Zombie(void);
					~Zombie(void);
		void		announce(void);
		std::string	getName(void) const;
		void		setName(std::string name);
		Zombie*		zombieHorde(int N, std::string name);

};

#endif
