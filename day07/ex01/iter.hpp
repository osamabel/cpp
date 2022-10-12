/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:58:04 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/12 19:55:42 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_H
#define ITER_H

#include <iostream>

template <class T> void print(T arr[], unsigned int length)
{
	for (size_t i = 0; i < length; i++)
		std::cout << "[]: " << arr[i] << std::endl;
}
template <class T> void inc(T &elem)
{
	elem++;
}
template <> void inc(std::string &elem)  // Template Specialization
{
	for (size_t i = 0; i < elem.length(); i++)
		elem[i]++;
}
template <class T> void _32(T &elem)
{
	elem -= 32;
}
template <class T> void iter(T arr[], unsigned int length, void xFunc(T &))
{
	for (size_t i = 0; i < length; i++)
		xFunc(arr[i]);
}
// template <class T, class F> void iter(T arr[], int length, F xFunc)
// {
// 	for (int i = 0; i < length; i++)
// 		xFunc(arr[i]);
// }

#endif