/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:58:45 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/13 16:14:18 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern
{
    public:
        AForm* makeForm(std::string formname, std::string target);
        class InternException : public std::exception
        {
            public:
                const char *what() const throw(){
                    return "Intern Failed\nForm not found";
                }
        };
};

#endif
