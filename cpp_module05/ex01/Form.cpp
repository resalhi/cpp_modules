/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:49:48 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/10 22:27:51 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int grade_s, int grade_e): name(name), grade_sign(grade_s), grade_execute(grade_e){
    _signed = false;
    if (grade_execute > 150)
        throw Form::GradeTooLowException();
    if (grade_sign > 150)
        throw Form::GradeTooLowException();
    if (grade_execute < 1)
        throw Form::GradeTooHighException();
    if (grade_sign < 1)
        throw Form::GradeTooHighException();
}

std::string Form::getName(void) const{return (name);}

int Form::getGradeSign(void)const{return (grade_sign);}

int Form::getGradeExecute(void)const{return (grade_execute);}

bool Form::get_signed(void)const{return (_signed);}

void    Form::beSigned(Bureaucrat const &bureaucrat){
    if (bureaucrat.getGrade() >= this->grade_sign)
        throw Form::GradeTooLowException();
    else
        this->_signed = true;
}

std::ostream& operator<<(std::ostream& out, const Form& form){
    out << "Form Name: ";
    out << form.getName();
    out << "\nForm Sign: ";
    out << form.get_signed();
    out << "\nForm Signed grade: ";
    out << form.getGradeSign();
    out << "\nForm Execute grade: ";
    out << form.getGradeExecute();
    return (out);
}
