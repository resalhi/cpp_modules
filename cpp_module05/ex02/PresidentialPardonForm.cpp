/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:52:04 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/13 13:51:05 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("contra", 25, 5), target("contra")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm(target, 25, 5), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &pres):AForm(pres.target, 145, 137){
    this->operator=(pres);
}

void    PresidentialPardonForm::execute(Bureaucrat const &excutor) const{
    if (excutor.getGrade() <= this->getGradeExecute())
        std::cout << target << " has been pardoned by Zaphod Beeblebrox\n";
    else
        throw AForm::GradeTooLowException();
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &pres){
    this->target = pres.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}
