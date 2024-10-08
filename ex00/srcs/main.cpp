/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:27:35 by eandre            #+#    #+#             */
/*   Updated: 2024/09/07 14:37:01 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie	*zombie;

	if (argc > 1)
		zombie = newZombie(argv[1]);
	else
		zombie = newZombie("Stephane");
	zombie->Zombie::announce();
	if (argc > 2)
		randomChump(argv[2]);
	else
		randomChump("Random");
	delete zombie;
}