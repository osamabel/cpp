/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:31:13 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/30 20:12:21 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
public:
	ScavTrap();
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();
	ScavTrap(std::string name);
	ScavTrap &operator = (const ScavTrap &assign);
	void attack(const std::string &target);
	void guardGate();
};

#endif