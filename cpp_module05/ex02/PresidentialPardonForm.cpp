/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:52:04 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/12 17:28:26 by ressalhi         ###   ########.fr       */
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

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &pres){
    this->target = pres.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}
