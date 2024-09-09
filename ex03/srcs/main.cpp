/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:27:35 by eandre            #+#    #+#             */
/*   Updated: 2024/09/09 18:10:36 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"

int	main(void)
{
	if (DO_SUBJECT_TEST == 1)
	{
		{
			Weapon club = Weapon("crude spiked club");
			HumanA bob("Bob", club);
			bob.attack();
			club.setType("some other type of club");
			bob.attack();
		}
		{
			Weapon club = Weapon("crude spiked club");
			HumanB jim("Jim");
			jim.setWeapon(club);
			jim.attack();
			club.setType("some other type of club");
			jim.attack();
		}
	}
	else
	{
		Weapon	testW = Weapon("little plastic knife");
		HumanA	testHA("A little child", testW);
		Weapon	testW2 = Weapon("AK42");
		HumanB	testHB("Stephane", testW2);
		testHA.attack();
		testHB.attack();
	}
}
