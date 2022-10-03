/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   content.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:26:49 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/03 15:49:54 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOSER_H
#define LOSER_H

#include <iostream>
#include <fstream>

class FileContent
{
private:
	std::string content;
	std::string s1;
	std::string s2;
	std::string path;
public:
	FileContent();
	~FileContent();
	void setContent(std::string content);
	void appendContent(std::string str);
	void setStr1(std::string s1);
	void setStr2(std::string s2);
	void setPath(std::string path);
	std::string getStr1();
	std::string getStr2();
	std::string getContent();
	std::string getPath();
};

#endif