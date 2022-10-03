/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:18:19 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/24 16:36:12 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
public:
	void announce(void);
	void setName(std::string name);
	Zombie(void);
	~Zombie(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif