/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:15:04 by eandre            #+#    #+#             */
/*   Updated: 2024/09/16 17:44:29 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public :
		HumanB(const std::string &_name, Weapon &_weapon);
		HumanB(const std::string &_name);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &_weapon);
	private :
		Weapon		*weapon;
		std::string	name;
};

#endif