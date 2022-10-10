/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:26:18 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/05 16:44:56 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_H
#define SERIALIZATION_H

#include <iostream>

typedef struct s_Data
{
	int  i;
	char c;
}t_Data;

typedef t_Data Data;
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif