/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:28:52 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/18 20:40:54 by ressalhi         ###   ########.fr       */
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
		Bureaucrat f("l9ayed", 1);
		ShrubberyCreationForm k("chajara");
		f.excuteForm(k);
		k.beSigned(f);
		f.excuteForm(k);
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat f("l9ayed", 1);
		RobotomyRequestForm p("pepper");
		f.excuteForm(p);
		p.beSigned(f);
		f.excuteForm(p);
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat f("l9ayed", 1);
		PresidentialPardonForm l("obama");
		f.excuteForm(l);
		l.beSigned(f);
		f.excuteForm(l);
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}
}
