/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:44:01 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/29 14:08:20 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap A("ROBOT");
	A.print();
	A.attack("MOUSE");
	A.attack("MOUSE");
	A.attack("MOUSE");
	A.print();
	A.takeDamage(5);
	A.takeDamage(5);
	A.print();
	A.takeDamage(5);
	A.beRepaired(3);
	A.attack("MOUSE");
	return (0);
}