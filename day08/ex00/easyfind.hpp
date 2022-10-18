/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:24:13 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/16 18:41:59 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <exception>

class FindException : public std::exception
{
	const char* what() const throw(){
		return ("No occurrence is found!");
	}
};

template <typename T> int easyfind(T container, int target)
{
	typename T::iterator itr1 = container.begin();
	typename T::iterator itr2 = container.end();
	typename T::iterator itr3 = std::find(itr1, itr2, target);
	if (itr3 == container.end())
		throw FindException();
	return (*itr3);
}

#endif
