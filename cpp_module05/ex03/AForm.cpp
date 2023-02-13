/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:49:48 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/10 22:27:51 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int grade_s, int grade_e): name(name), grade_sign(grade_s), grade_execute(grade_e){
    _signed = false;
    if (grade_execute > 150)
        throw AForm::GradeTooLowException();
    if (grade_sign > 150)
        throw AForm::GradeTooLowException();
    if (grade_execute < 1)
        throw AForm::GradeTooHighException();
    if (grade_sign < 1)
        throw AForm::GradeTooHighException();
}

std::string AForm::getName(void) const{return (name);}

int AForm::getGradeSign(void)const{return (grade_sign);}

int AForm::getGradeExecute(void)const{return (grade_execute);}

bool AForm::get_signed(void)const{return (_signed);}

void    AForm::beSigned(Bureaucrat const &bureaucrat){
    if (bureaucrat.getGrade() >= this->grade_sign)
        throw AForm::GradeTooLowException();
    else
        this->_signed = true;
}

void    AForm::execute(Bureaucrat const &excutor) const{
    std::cout << excutor.getName() << " excuted " << name << std::endl;
}

std::ostream& operator<<(std::ostream& out, const AForm& aform){
    out << "AForm Name: ";
    out << aform.getName();
    out << "\nAForm Sign: ";
    out << aform.get_signed();
    out << "\nAForm Signed grade: ";
    out << aform.getGradeSign();
    out << "\nAForm Execute grade: ";
    out << aform.getGradeExecute();
    return (out);
}
