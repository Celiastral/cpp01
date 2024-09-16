/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:01:00 by eandre            #+#    #+#             */
/*   Updated: 2024/09/16 17:40:54 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iomanip>

# ifdef SUBJECT
#  define DO_SUBJECT_TEST 1
# else
#  define DO_SUBJECT_TEST 0
# endif

class Weapon
{
	public :
		Weapon(const std::string &_type);
		Weapon();
		~Weapon();
		std::string	const	&getType(void) const;
		void				setType(const std::string &_type);
	private :
		std::string	type;
};

#endif