/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:01:23 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/30 20:30:30 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
public:
	FragTrap();
	FragTrap(const FragTrap &copy);
	~FragTrap();
	FragTrap(std::string name);
	FragTrap &operator = (const FragTrap &assign);
	void highFivesGuys(void);
};

#endif