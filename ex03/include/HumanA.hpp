/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:15:02 by eandre            #+#    #+#             */
/*   Updated: 2024/09/16 17:44:04 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public :
		HumanA(const std::string &_name, Weapon &_weapon);
		~HumanA();
		void	attack(void);
	private :
		Weapon		&weapon;
		std::string	name;
};

#endif