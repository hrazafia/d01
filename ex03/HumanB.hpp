/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 07:52:11 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/13 10:11:50 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;

	public:
				HumanB(const std::string &name);
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif
