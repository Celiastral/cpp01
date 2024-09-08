/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:27:35 by eandre            #+#    #+#             */
/*   Updated: 2024/09/08 18:32:53 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		Weapon	testW = Weapon(argv[1]);
		HumanA	testHA(argv[2], testW);
		Weapon	testW2 = Weapon(argv[1]);
		HumanB	testHB(argv[2]);
		testHA.attack();
		testHB.attack();
	}
	else
	{
		Weapon	testW = Weapon("little plastic knife");
		HumanA	testHA("A little child", testW);
		Weapon	testW2 = Weapon("AK42");
		HumanB	testHB("Stephane");
		testHA.attack();
		testHB.attack();
	}
}
