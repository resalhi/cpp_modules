/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:56:57 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/10 22:17:44 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool    _signed;
        const int grade_sign;
        const int grade_execute;
    public:
        AForm(std::string name, int grade_s, int grade_e);
        std::string getName(void) const;
        int getGradeSign(void)const;
        int getGradeExecute(void)const;
        bool get_signed(void)const;
        void    execute(Bureaucrat const &excutor) const;
        virtual void    beSigned(Bureaucrat const &bureaucrat);
        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw(){
                    return "AForm Grade Too High";
                }
        };
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw(){
                    return "AForm Grade Too Low";
                }
        };
};

std::ostream& operator<<(std::ostream& out, const AForm& aform);

#endif
