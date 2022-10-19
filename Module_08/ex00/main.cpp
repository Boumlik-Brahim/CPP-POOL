/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:19:16 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/19 15:22:57 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"easyfind.hpp"

int main( void )
{
    std::array<int, 5> intarray ;
    intarray[0] = 11;
    intarray[1] = 12;
    intarray[2] = 13;
    intarray[3] = 14;
    intarray[4] = 15;

    std::vector<int> orderedSides;
    orderedSides.push_back(1);
    orderedSides.push_back(2);
    orderedSides.push_back(3);
    orderedSides.push_back(4);
    orderedSides.push_back(5);

    std::list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    std::deque<int> deq;
    deq.push_back(2);
    deq.push_front(1);
    deq.push_back(3);

    try
    {
        easyfind(intarray, 13);
        easyfind(orderedSides, 3);
        easyfind(l, 2);
        easyfind(deq, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}