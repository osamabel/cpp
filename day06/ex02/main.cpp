/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:35:51 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/05 18:59:24 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dynamic.hpp"

int main ()
{
	Base *x = generate();

	std::cout << "the actual type of the object pointed by base :";
	identify(x);
	std::cout << std::endl;
	std::cout << "the actual type of the object referenced by base :";
	identify(*x);
	std::cout << std::endl;
}