/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:02:07 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/23 10:17:10 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

/************************************************ Constractor / Deconstractor */
ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", 145, 137)
{
	this->target = "Shrubbery";
    std::cout << "SHRUBBERYCREATIONFORM DEFAULT CONSTRACTOR" << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "SHRUBBERYCREATIONFORM DECONSTRACTOR" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", 145, 137)
{
	this->target = target;
    std::cout << "SHRUBBERYCREATIONFORM PARAMETERIZED CONSTRACTOR" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form("Shrubbery", 145, 137)
{
	this->target = copy.target;
    std::cout << "SHRUBBERYCREATIONFORM COPY CONSTRACTOR" << std::endl;
}

/***************************************************************** Overloaded */
ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &assign)
{
    if (this != &assign)
    	target = assign.target;
    return (*this);
}

/******************************************************************** Methods */
std::string	ShrubberyCreationForm::getTarget() const
{
	return (target);
}
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > getGradeExecuted())
        throw GradeCantExecuted();
    if (!getformIsSigned())
        throw FormNotSigned();
	std::cout << "	" << "+-------------------- Exectuting --------------------------+" << std::endl;
    std::cout << "	" << target << " has been Create [ " << target << "_shrubbery ]" <<std::endl;
	std::cout << "	" << "+----------------------------------------------------------+" << std::endl;
    std::string shrubbery = "\
	.        +          .      .          .\n\
     .            _        .                    .\n\
  ,              /;-._,-.____        ,-----.__\n\
 ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n\
  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n\
                      ,    `./  \\:. `.   )==-'  .\n\
    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n\
.           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n\
       .    /:+- - + +- : :- + + -:'  /(o-) )     .\n\
  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n\
   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n\
              \\:  `  X` _| _,\\/'   .-'\n\
.               \":._:`\\____  /:'  /      .           .\n\
                    \\::.  :\\/:'  /              +\n\
   .                 `.:.  /:'  }      .\n\
           .           ):_(:;   \\           .\n\
                      /:. _/ ,  |\n\
                   . (|::.     ,`                  .\n\
     .                |::.    {\n\
                      |::.\\  \\ `.\n\
                      |:::(\\    |\n\
              O       |:::/{ }  |                  (o\n\
               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n\
          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~\"\n";

    std::ofstream outfile(target + "_shrubbery");
    if (outfile.is_open())
        outfile << shrubbery;
}
