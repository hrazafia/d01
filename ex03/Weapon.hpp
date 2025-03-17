/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 07:52:19 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/17 07:27:40 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	private:
		std::string	type;

	public:
							Weapon(const std::string &type);
		const std::string&	getType(void) const;
		void				setType(const std::string &type);
};

#endif
