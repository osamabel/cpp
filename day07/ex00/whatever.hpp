/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:40:33 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/09 10:56:04 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>
template <class T> void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
template <class T> T &min(T &a, T &b)
{
	if (a == b)
		return b;
	return (a < b) ? a : b;
}
template <class T> T &max(T &a, T &b)
{
	if (a == b)
		return b;
	return (a > b) ? a : b;
}

#endif