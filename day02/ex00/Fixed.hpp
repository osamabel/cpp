/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:09:53 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/28 14:30:05 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
private:
	int fixedPoint;
	static const int fractional;
public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator = (const Fixed &assigner);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif