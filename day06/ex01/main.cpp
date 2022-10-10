/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:25:22 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/05 16:36:09 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
	Data data;

	data.i = 65319;  // 00000000 00000000 11111111 00100011
	data.c = 'x';    // 00000000 00000000 00000000 01111000
	uintptr_t holder = serialize(&data);
	// std::cout << holder << std::endl;
	Data *dataRe = deserialize(holder);
	std::cout << dataRe->i << std::endl;
	std::cout << dataRe->c << std::endl;
	return 0;
}
// 00100011
// 11111111
// 00000000
// 00000000
// --------
// 01111000