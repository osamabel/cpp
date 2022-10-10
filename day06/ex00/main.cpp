/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:48:00 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/05 13:07:25 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

bool  isDegit(char c)
{
	return (c >= '0' && c <= '9');
}
bool  isPrintable(char c)
{
	return (c >= ' ' && c <= 127);
}

void ft_exit()
{
	std::cerr << "Error : Wrong Arguments !" << std::endl;
	exit(1);
}


int main(int ac, char *av[])
{
	int dot = 0;
	int f = 0;
	Caster caster;
	if (ac == 2)
	{
		std::string str = av[1];
		if (str == "+inff" || str == "inff" || str == "+inf" || str == "inf")
		{
			caster.setinf(true);
			caster.setDouble(INFINITY);
			caster.setFloat(INFINITY);
		}
		else if (str == "-inff" || str == "-inf")
		{
			caster.setinf(true);
			caster.setDouble(-INFINITY);
			caster.setFloat(-INFINITY);
		}
		else if (str == "nanf" || str == "nan")
			caster.setNan(true);
		else if (str.length() == 1)  // integer or character
		{
			if (isDegit(str[0]))
				caster.castSet((int)std::stold(str));
			else if (isPrintable(str[0]))
				caster.castSet(str[0]);
		}
		else
		{
			for (size_t i = 0; i < str.length(); i++)
			{
				if (i == 0)
				{
					if ((str[i] == '-' || str[i] == '+') && i == 0)
						i++;
					if (str[i] == '.')
						ft_exit();
				}
				if (str[i] == '.')
					dot++;
				if (str[i] == 'f')
					f++;
				if (dot > 1 || str[str.length() - 1] == '.')
					ft_exit();
				if (str[i] == '.' && str[i + 1] == 'f')
					ft_exit();
				if (!((str[i] >= '0' && str[i] <= '9') || str[i] == '.' || str[i] == 'f'))
					ft_exit();
				if (str[i] == 'f' && i < str.length() - 1)
					ft_exit();
			}
			if (f)       // is a float
				caster.castSet((float)std::stold(str));
			else
			{
				if (dot) // is a double
					caster.castSet((double)std::stold(str));
				else     // is a integer
					caster.castSet((int)std::stold(str));
			}
		}
		caster.print();
	}
	else
		ft_exit();
	return 0;
}

// +inf > double
// char: IMPOSIBLE
// int: IMPOSIBLE
// float: +inff
// double: +inf

// +inff
// char: IMPOSIBLE
// int: IMPOSIBLE
// float: +inff
// double:+inf