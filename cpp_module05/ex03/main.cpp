/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:28:52 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/13 16:18:22 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
int main()
{
    try
	{
		Intern someRandomIntern;
		AForm* rrf;
		Bureaucrat f("chikh", 1);
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		rrf->execute(f);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
