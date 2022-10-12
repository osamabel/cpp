/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:48:00 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/12 11:48:02 by obelkhad         ###   ########.fr       */
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

bool infinit(std::string str, Caster &caster)
{
	if (str == "+inff" || str == "inff" || str == "+inf" || str == "inf")
	{
		caster.setinf(true);
		caster.setDouble(INFINITY);
		caster.setFloat(INFINITY);
		return true;
	}
	else if (str == "-inff" || str == "-inf")
	{
		caster.setinf(true);
		caster.setDouble(-INFINITY);
		caster.setFloat(-INFINITY);
		return true;
	}
	return false;
}
bool notNumber(std::string str, Caster &caster)
{
	if (str == "nanf" || str == "nan")
	{
		caster.setNan(true);
		return true;
	}
	return false;
}

bool character(std::string str, Caster &caster)
{
	if (str.length() == 1)
	{
		if (isDegit(str[0]))
			caster.castSet((int)std::stold(str));
		else if (isPrintable(str[0]))
			caster.castSet(str[0]);
		return true;
	}
	return false;
}

void convertStr(std::string str, Caster &caster)
{
	int dot = 0;
	int f = 0;

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
	if (f)
		caster.castSet((float)std::stold(str));
	else
	{
		if (dot)
			caster.castSet((double)std::stold(str));
		else
			caster.castSet((int)std::stold(str));
	}
}

int main(int ac, char *av[])
{
	Caster caster;
	if (ac == 2)
	{
		if (!infinit(av[1], caster) && !notNumber(av[1], caster))
		{
			if (!character(av[1], caster))
				convertStr(av[1], caster);
		}
		caster.print();
	}
	else
		ft_exit();
	return 0;
}
