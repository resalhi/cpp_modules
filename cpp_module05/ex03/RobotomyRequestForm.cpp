/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:52:11 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/18 20:40:06 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("robot", 72, 45), target("robot")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm(target, 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &robo):AForm(robo.target, 72, 45){
    this->operator=(robo);
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &robo){
    this->target = robo.target;
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const &excutor) const{
    if (excutor.getGrade() <= this->getGradeExecute())
        std::cout << target << " has been robotomized successfully 50% of the time\n";
    else{
        std::cout << target << " robotomy execute failed\n";
        throw AForm::GradeTooLowException();
    }
}

RobotomyRequestForm::~RobotomyRequestForm(){}
