/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:28:56 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/18 18:51:27 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        unsigned int grade;
    public:
        Bureaucrat(std::string name, int grade);
        std::string getName(void) const;
        int getGrade(void)const;
        void    increment_grade(void);
        void    decrement_grade(void);
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
