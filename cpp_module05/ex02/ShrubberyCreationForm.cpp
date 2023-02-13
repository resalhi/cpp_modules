/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:52:17 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/13 13:47:10 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():AForm("contra", 145, 137), target("contra")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm(target, 145, 137), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &shrub):AForm(shrub.target, 145, 137){
    this->operator=(shrub);
}

void    ft_tree(std::string target){
    std::ofstream file(target + "_shrubbery");
    file << "                                                         .\n";
    file << "                                              .         ;  \n";
    file << "             .              .              ;%     ;;   \n";
    file << "                   ,           ,                :;%  %;   \n";
    file << "                    :         ;                   :;%;'     .,   \n";
    file << "           ,.        %;     %;            ;        %;'    ,;\n";
    file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
    file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
    file << "               ;%;      %;        ;%;        % ;%;  ,%;'\n";
    file << "                `%;.     ;%;     %;'         `;%%;.%;'\n";
    file << "                 `:;%.    ;%%. %@;        %; ;@%;%'\n";
    file << "                    `:%;.  :;bd%;          %;@%;'\n";
    file << "                      `@%:.  :;%.         ;@@%;'   \n";
    file << "                        `@%.  `;@%.      ;@@%;         \n";
    file << "                          `@%%. `@%%    ;@@%;        \n";
    file << "                            ;@%. :@%%  %@@%;       \n";
    file << "                              %@bd%%%bd%%:;     \n";
    file << "                                #@%%%%%:;;\n";
    file << "                                %@@%%%::;\n";
    file << "                                %@@@%(o);  . '         \n";
    file << "                                %@@@o%;:(.,'         \n";
    file << "                            `.. %@@@o%::;         \n";
    file << "                               `)@@@o%::;         \n";
    file << "                                %@@(o)::;        \n";
    file << "                               .%@@@@%::;         \n";
    file << "                               ;%@@@@%::;.          \n";
    file << "                              ;%@@@@%%:;;;. \n";
    file << "                          ...;%@@@@@%%:;;;;,..    \n";
}

void    ShrubberyCreationForm::execute(Bureaucrat const &excutor) const{
    if (excutor.getGrade() <= this->getGradeExecute())
        ft_tree(this->target);
    else
        throw AForm::GradeTooLowException();
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &shrub){
    this->target = shrub.target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}
