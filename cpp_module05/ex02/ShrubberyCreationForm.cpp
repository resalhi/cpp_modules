/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:52:17 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/12 16:07:24 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("contra", 145, 137), target("contra")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm(target, 145, 137), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &shrub):AForm(shrub.target, 145, 137){
    this->operator=(shrub);
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &shrub){
    this->target = shrub.target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}
