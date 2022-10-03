/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:20:08 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/25 16:05:39 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPOM_H
#define WEAPOM_H

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);
	const std::string &getType();
	void setType(std::string type);
};

#endif