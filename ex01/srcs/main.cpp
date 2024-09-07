/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:27:35 by eandre            #+#    #+#             */
/*   Updated: 2024/09/07 14:59:06 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie	*zombie_horde;

	if (argc > 1)
		zombie_horde = zombieHorde(10, argv[1]);
	else
		zombie_horde = zombieHorde(10, "Stephane");
	delete [] zombie_horde;
}