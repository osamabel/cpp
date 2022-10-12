/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:25:22 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/12 15:15:56 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
	Data data;
	data.i = 99933;
	data.c = 'x';

	std::cout << "--------- RESULT & CASTING --------" << std::endl;
	uintptr_t holder = serialize(&data);
	Data *dataReconv = deserialize(holder);
	std::cout << dataReconv->i << std::endl;
	std::cout << dataReconv->c << std::endl;
	return 0;
}