/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:37:32 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/05 18:53:48 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef DYNAMIC_H
#define DYNAMIC_H

#include <iostream>
#include <time.h>

class Base
{
public:
	virtual ~Base();
};
class A : public Base
{
};
class B : public Base
{
};
class C : public Base
{
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);
#endif
