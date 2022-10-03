/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:06:26 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/25 22:15:13 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *w_eapon;
public:
	HumanB();
	HumanB(std::string name);
	~HumanB(void);
	void setWeapon(Weapon &w_eapon);
	void attack(void);
};

#endif