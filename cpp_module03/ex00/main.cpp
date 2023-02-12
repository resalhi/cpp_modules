/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:53:01 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/09 15:41:50 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("lee");
    ClapTrap c(b);

    b.attack("graves");
    c.attack("zed");
}