/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:52:17 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/18 20:39:54 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():AForm("home", 145, 137), target("home")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm(target, 145, 137), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &shrub):AForm(shrub.target, 145, 137){
    this->operator=(shrub);
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &shrub){
    this->target = shrub.target;
    return (*this);
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

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
    if (executor.getGrade() <= this->getGradeExecute())
        ft_tree(this->target);
    else
        throw AForm::GradeTooLowException();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}
