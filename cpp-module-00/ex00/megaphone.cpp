/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:37:28 by obelkhad          #+#    #+#             */
/*   Updated: 2022/03/10 15:56:35 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	if (argc == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			cout << (char)toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	return (0);
}