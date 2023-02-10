/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:28:58 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/10 22:27:21 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade){
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

std::string Bureaucrat::getName(void) const{return (name);}

int Bureaucrat::getGrade(void) const{return (grade);}

void    Bureaucrat::increment_grade(void){
    if (grade - 1 >= 1)
        grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void    Bureaucrat::decrement_grade(void){
    if (grade + 1 <= 150)
        grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

void    Bureaucrat::signForm(Form const &form)const{
    if (form.get_signed())
        std::cout << this->name << " signed " << form.getName() << std::endl;
    else
        std::cout << this->name << " couldn't sign " << form.getName() << " because it is not signed\n";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat){
    out << bureaucrat.getName();
    out << ", bureaucrat grade ";
    out << bureaucrat.getGrade();
    return (out);
}
