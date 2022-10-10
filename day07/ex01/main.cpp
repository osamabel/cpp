/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:07:39 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/09 16:18:05 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ integer" << std::endl<< std::endl;
	int num[6] = {0,2,3,4,5,6};
	print(num, sizeof(num) / sizeof(num[0]));
	iter(num, sizeof(num) / sizeof(num[0]), inc);
	std::cout << "Result" << std::endl;
	print(num, sizeof(num) / sizeof(num[0]));
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ char" << std::endl<< std::endl;

	char chrs[6] = {'f','q','t','c','p','a'};
	print(chrs, sizeof(chrs) / sizeof(chrs[0]));
	iter(chrs, sizeof(chrs) / sizeof(chrs[0]), _32<char>);
	std::cout << "Result" << std::endl;
	print(chrs, sizeof(chrs) / sizeof(chrs[0]));
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ double" << std::endl<< std::endl;

	double dubl[6] = {5.1,2.4,3.7,4.4,5.1,6.9};
	print(dubl, sizeof(dubl) / sizeof(dubl[0]));
	iter(dubl, sizeof(dubl) / sizeof(dubl[0]), inc<double>);
	std::cout << "Result" << std::endl;
	print(dubl, sizeof(dubl) / sizeof(dubl[0]));
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ string" << std::endl<< std::endl;

	std::string str[6] = {"abc", "def","ghi","jklm"};
	print(str, 4);
	iter(str, 4, inc<std::string>);
	std::cout << "Result" << std::endl;
	print(str, 4);
    return 0;
}