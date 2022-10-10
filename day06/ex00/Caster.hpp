/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:47:55 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/05 13:07:53 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_H
#define CAST_H
#include <iostream>
#include <string>
#include <cmath>

class Caster
{
private:
	char   myChar;
	int    myIntiger;
	float   myFloat;
	double myDouble;
	bool   infint;
	bool   nanVal;
public:
	Caster();
	Caster(const Caster &copy);
	~Caster();
	Caster &operator = (const Caster &assign);
	void setNan(bool b);
	void setinf(bool b);
	void setIntiger(int i);
	void setFloat(float f);
	void setDouble(double d);
	void setChar(char c);
	int  getIntiger();
	float getFloat();
	double getDouble();
	char getChar();
	void print();
	void castSet(char c);
	void castSet(int i);
	void castSet(float f);
	void castSet(double d);
};

#endif