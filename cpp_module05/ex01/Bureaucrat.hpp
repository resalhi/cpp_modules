/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:28:56 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/10 22:27:16 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(std::string name, int grade);
        std::string getName(void) const;
        int getGrade(void)const;
        void    increment_grade(void);
        void    decrement_grade(void);
        void    signForm(Form const &form)const;
        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw(){
                    return "Bureaucrat Grade Too High";
                }
        };
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw(){
                    return "Bureaucrat Grade Too Low";
                }
        };
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif
