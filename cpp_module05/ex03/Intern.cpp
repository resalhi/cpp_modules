/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:58:47 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/13 16:16:56 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

AForm* Intern::makeForm(std::string formname, std::string target){
    AForm *obj = NULL;
    int index=3;int i;
    std::string s[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (i = 0; i < 3; i++){
        if (s[i] == formname)
            index = i;
    }
    switch (index)
    {
        case 0:
            std::cout << "Intern creates " << formname << std::endl;
            obj = new ShrubberyCreationForm(target);
            break;
        case 1:
            std::cout << "Intern creates " << formname << std::endl;
            obj = new RobotomyRequestForm(target);
            break;
        case 2:
            std::cout << "Intern creates " << formname << std::endl;
            obj = new PresidentialPardonForm(target);
            break;
        case 3:
            throw Intern::InternException();
            break;
    }
    return (obj);
}

