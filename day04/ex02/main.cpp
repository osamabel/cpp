/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:05:26 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/30 18:09:22 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "poly.hpp"

int main()
{
	{
		Animal *x;
		x = new Cat();
		x->makeSound();
		x = new Dog();
		x->makeSound();
		delete x;
	}
}