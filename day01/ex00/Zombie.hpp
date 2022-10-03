/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:23:59 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/24 15:34:34 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(void);
	void announce(void);
	Zombie(std::string name);
	~Zombie(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif