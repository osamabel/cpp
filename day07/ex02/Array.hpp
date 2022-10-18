/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:20:23 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/12 20:01:39 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <class T> class Array
{
private:
	T *elm;
	size_t mySize;
public:
	Array();
	~Array();
	Array(unsigned int n);
	Array(const Array &copy);
	Array &operator = (const Array &assig);
	T &operator [] (unsigned int index);
	void print();
	size_t size();
	class ArrayException : public std::exception
	{
		const char *what() const throw();
	};
};

//include template implemetation
#include "Array.tpp"

#endif