/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:57:31 by ressalhi          #+#    #+#             */
/*   Updated: 2023/01/26 18:58:32 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class phonebook
{
    private:
        contact contact[8];
    public :
        int     index;
        int     full;
        void    ft_addc(void);
        void    ft_searchc(void);
};


#endif