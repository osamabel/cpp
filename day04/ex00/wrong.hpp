/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrong.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:37:22 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/16 16:17:37 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_H
#define WRONG_H

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string type;
public:
	/******************************************* Constractors - Deconstractor */
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(const WrongAnimal &wronganimal);
    WrongAnimal(std::string type);

	/************************************************************* Overloaded */
    WrongAnimal &operator = (const WrongAnimal &wronganimal);

	/*************************************************************** Methodes */
    std::string getType(void) const;
    void makeSound(void) const;
};

/*-----[ CAT ]------\
                     \
					  \-------------------------------------------------------->
************************************************ Constractors - Deconstractor */
class WrongCat : public WrongAnimal
{
public:
	/******************************************* Constractors - Deconstractor */
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &wrongcat);
    WrongCat(std::string type);

	/************************************************************* Overloaded */
    WrongCat &operator = (const WrongCat &wrongcat);

	/*************************************************************** Methodes */
    void makeSound(void) const;
};
#endif