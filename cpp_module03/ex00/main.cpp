/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:53:01 by ressalhi          #+#    #+#             */
/*   Updated: 2023/01/31 16:59:22 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("lee");
    ClapTrap c(a);

    a.attack("lillia");
    b.attack("graves");
    c.attack("zed");
}