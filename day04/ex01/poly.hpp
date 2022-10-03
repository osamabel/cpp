/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:14:34 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/30 18:29:57 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLY_H
#define POLY_H

#include "brain.hpp"

/*---[ ANIMAL ]-----\
                     \
					  \-------------------------------------------------------->
************************************************ Constractors - Deconstractor */
class Animal
{
protected:
	std::string type;
public:
	/******************************************* Constractors - Deconstractor */
	Animal();
	virtual ~Animal();
	Animal(const Animal &copy);
	Animal(std::string type);

	/************************************************************* Overloaded */
	Animal &operator = (const Animal &assig);

	/*************************************************************** Methodes */
	virtual void makeSound() const;
	std::string getType() const;
};

/*-----[ DOG ]------\
                     \
					  \-------------------------------------------------------->
************************************************ Constractors - Deconstractor */
class Dog : public virtual Animal
{
private:
	Brain *dogBrain;
public:
	/******************************************* Constractors - Deconstractor */
	Dog();
	~Dog();
	Dog(const Dog &copy);
	Dog(std::string type);

	/************************************************************* Overloaded */
	Dog &operator = (const Dog &assig);

	/*************************************************************** Methodes */
	void makeSound() const;
	Brain *getBrain(void) const;
};

/*-----[ CAT ]------\
                     \
					  \-------------------------------------------------------->
************************************************ Constractors - Deconstractor */
class Cat : public virtual Animal
{
private:
	Brain *catBrain;
public:
	/******************************************* Constractors - Deconstractor */
	Cat();
	~Cat();
	Cat(const Cat &copy);
	Cat(std::string type);

	/************************************************************* Overloaded */
	Cat &operator = (const Cat &assig);

	/*************************************************************** Methodes */
	void makeSound() const;
	Brain *getBrain(void) const;
};

#endif