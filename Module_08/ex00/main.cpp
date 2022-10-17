/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:19:16 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/17 11:56:54 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"easyfind.hpp"
# include <vector>
# include <array>

int main( void )
{
    // std::array<int, 5> intarray = {11,22,33};
    // std::vector<int> numbers = {1, 100, 10, 70, 100};

    std::vector<int> orderedSides;
    orderedSides.push_back(1);
    orderedSides.push_back(2);
    orderedSides.push_back(3);
    orderedSides.push_back(4);
    orderedSides.push_back(5);

    // for (int i = 0; i < 5; i++)
    //     std::cout << orderedSides[i] << std::endl;

    try
    {
        easyfind(orderedSides, 3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    return 0;
}