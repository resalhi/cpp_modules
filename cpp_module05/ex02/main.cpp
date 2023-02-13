/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:28:52 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/13 13:51:27 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
	{
		Bureaucrat f("l9ayed", 40);
		ShrubberyCreationForm k("");
		RobotomyRequestForm p("kamal");
		PresidentialPardonForm l("3issa");
		k.execute(f);
		p.execute(f);
		l.execute(f);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
