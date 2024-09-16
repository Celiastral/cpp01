/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 22:27:57 by eandre            #+#    #+#             */
/*   Updated: 2024/09/16 17:36:37 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "\033[0;34mAddresses:\033[0m" << std::endl;
	std::cout << "str address value:" << std::setw(21) << &str << std::endl;
	std::cout << "stringPTR address value: " << &stringPTR << std::endl;
	std::cout << "stringREF address value: " << &stringREF << std::endl;

	std::cout << "\033[0;34mValues:\033[0m" << std::endl;
	std::cout << "str value:" << std::setw(23) << str << std::endl;
	std::cout << "stringPTR value: " << stringPTR << std::endl;
	std::cout << "stringREF value: " << stringREF << std::endl;
}