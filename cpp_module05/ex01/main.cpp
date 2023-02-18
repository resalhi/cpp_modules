/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:28:52 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/18 20:14:54 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
	{
		Bureaucrat b("l9ayed", 40);
		Form f("chahadat sokna", 40, 1);
		b.signForm(f);
		std::cout << f << std::endl;
		f.beSigned(b);
		b.signForm(f);
		std::cout << f << std::endl;
	}
	catch(const std::exception& e){
		std::cout << e.what() << std::endl;
	}
}
