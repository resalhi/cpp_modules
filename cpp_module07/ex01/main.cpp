/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:21:41 by ressalhi          #+#    #+#             */
/*   Updated: 2023/02/23 13:38:10 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template< typename T >
void print( T const & x ) {
    std::cout << x << std::endl;
    return;
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char b[9] = "template";
    iter(a, 10, print<int>);
    iter(b, 9, print<char>);
}

// class Awesome
// {
//     public:
//         Awesome( void ) : _n( 42 ) { return; }
//         int get( void ) const { return this->_n; }
//     private:
//         int _n;
// }; 

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get();return o; }

// int main() {
//     int tab[] = { 0, 1, 2, 3, 4 }; // <--- Inever understood why you can't write int[] tab. Wouldn't that make more sense?
//     Awesome tab2[5];
//     iter( tab, 5, print );
//     iter( tab2, 5, print );
//     return 0; 
// }
