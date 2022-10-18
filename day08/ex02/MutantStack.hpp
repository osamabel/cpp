/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:03:29 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/18 19:16:00 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>
#include <list>
#include <iostream>
#include <string>

// template< class T> class MutantStack : public std::stack<T, std::deque<T> >

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack(){};
	~MutantStack(){};
	MutantStack(const MutantStack &copy){ *this = copy; };
	MutantStack &operator = (const MutantStack &assign)
	{
		if (this != &assign)
			this->c = assign.c;
		return *this;
	};

	/************************************************************** ITERATORS */
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
	reverse_iterator rbegin() { return this->c.rbegin(); }
	reverse_iterator rend() { return this->c.rend(); }
	const_iterator cbegin() const { return this->c.cbegin(); }
	const_iterator cend() const { return this->c.cend(); }
	const_reverse_iterator crbegin() const { return this->c.crbegin(); }
	const_reverse_iterator crend() const { return this->c.crend(); }
};

#endif
