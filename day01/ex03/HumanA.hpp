/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:30:22 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/02 09:56:22 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon &w_eapon;
public:
	HumanA(std::string name, Weapon &w_eapon);
	~HumanA(void);
	void attack(void);
};

#endif