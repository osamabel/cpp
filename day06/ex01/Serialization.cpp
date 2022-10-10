/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:26:22 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/05 16:43:36 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data *ptr)
{
	uintptr_t result;

	result = reinterpret_cast<uintptr_t>(ptr);
	return result;
}
Data *deserialize(uintptr_t raw)
{
	Data *result;

	result = reinterpret_cast<Data *>(raw);
	return result;
}