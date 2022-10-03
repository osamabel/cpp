/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:48:00 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/02 15:10:03 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Base
{
protected:
	int m_value;

public:
	Base(int value) : m_value(value){}
	virtual ~Base(){};
};

class Derived : public Base
{
protected:
	std::string m_name;
public:
	Derived(int value, const std::string& name) : Base(value), m_name(name){}
	const std::string& getName() const { return m_name; }
};

Base* getObject(bool returnDerived)
{
	if (returnDerived)
		return new Derived(1, "Apple");
	else
		return new Base(2);
}

int main()
{
	Base *base = getObject(0);
	Derived *d = dynamic_cast<Derived *>(base);
	std::cout << d->getName(); // ERROR : no member named 'getName' in 'Base'
	delete base;
	return 0;
}

