/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:30:35 by obelkhad          #+#    #+#             */
/*   Updated: 2022/08/24 18:16:30 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main (int ac, char *av[])
{
	if (ac > 1)
	{
		int j = 1;
		while (av[j])
		{
			int i = 0;
			while (av[j][i])
				std::cout << (char)toupper(av[j][i++]);
			j++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}