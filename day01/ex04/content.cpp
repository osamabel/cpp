/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   content.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:27:01 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/03 15:52:46 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "content.hpp"

FileContent::FileContent()
{
	std::cout << "FileContent created" << std::endl;
}
FileContent::~FileContent()
{
	std::cout << "FileContent destroyed" << std::endl;
}
void FileContent::setContent(std::string content)
{
	this->content = content;
}
void FileContent::appendContent(std::string str)
{
	content += str;
}
void FileContent::setStr1(std::string s1)
{
	this->s1 = s1;
}
void FileContent::setStr2(std::string s2)
{
	this->s2 = s2;
}
void FileContent::setPath(std::string path)
{
	this->path = path;
}
std::string FileContent::getContent()
{
	return (content);
}
std::string FileContent::getStr1()
{
	return (s1);
}
std::string FileContent::getStr2()
{
	return (s2);
}
std::string FileContent::getPath()
{
	return (path);
}