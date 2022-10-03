/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:44:01 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/29 14:28:39 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap A("FRIGO");
	A.print();
	A.highFivesGuys();
	A.takeDamage(10);
	A.takeDamage(10);
	A.print();
	return (0);
}