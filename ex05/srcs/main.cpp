/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:49:53 by eandre            #+#    #+#             */
/*   Updated: 2024/09/09 20:32:28 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	Harl;
	if (argc > 1)
		Harl.complain(argv[1]);
	else
		Harl.complain("INFO");
}