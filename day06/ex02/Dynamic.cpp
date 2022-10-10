/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:37:51 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/05 19:02:01 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dynamic.hpp"

Base::~Base(){}

Base *generate(void)
{
	srand (time(NULL));
	int r = rand() % 3 + 1;
	if (r == 1)
		return (new A());
	else if (r == 2)
		return (new B());
	else
		return (new C());
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A";
	if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B";
	if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C";
}

void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (const std::bad_cast &b)
	{
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (const std::bad_cast &b)
	{
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;;
		return ;
	}
	catch (const std::bad_cast &b)
	{
	}
}