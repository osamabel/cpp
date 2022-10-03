/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:44:01 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/29 14:26:34 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap A;
	ScavTrap B("SCAV");
	ScavTrap C(B);
	A.print();
	B.print();
	C.print();
	A.guardGate();
	B.guardGate();
	C.guardGate();
	return (0);
}