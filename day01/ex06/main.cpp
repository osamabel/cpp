/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 07:57:26 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/25 17:33:38 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int hashit (std::string const& inString)
{
    if (inString == "DEBUG") return 0;
    if (inString == "INFO") return 1;
    if (inString == "WARNING") return 2;
    if (inString == "ERROR") return 3;
	return -1;
}


int main (int ac, char *av[])
{
	Harl h;

	if (ac == 2)
	{
		switch (hashit(av[1]))
		{
			case 0:
				h.complain(h.getNameByIndex(0));
			case 1:
				h.complain(h.getNameByIndex(1));
			case 2:
				h.complain(h.getNameByIndex(2));
			case 3:
				h.complain(h.getNameByIndex(3));
			case -1:
				std::cout << "Invalide parameter!" << std::endl;
			break;
		}
	}
}