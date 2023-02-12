/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:52:11 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/12 17:00:12 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("contra", 72, 45), target("contra")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm(target, 145, 137), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &robo):AForm(robo.target, 145, 137){
    this->operator=(robo);
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &robo){
    this->target = robo.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}