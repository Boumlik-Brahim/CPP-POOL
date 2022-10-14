/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:30:21 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/14 16:31:14 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Array.hpp"

int main(int argc, char const *argv[])
{
    Array<int> array1(5);
    Array<int> array2(array1);
    Array<int> array3(2);

    std::cout << array1.size() << std::endl ;
    std::cout << array2.size() << std::endl ;

    array1 = array3;
    std::cout << array1.size() << std::endl ;
    std::cout << array3.size() << std::endl ;

    // try
    // {
    //     array3[0] = 1;
    //     array3[1] = 2;
    //     array3[2] = 3;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    try
    {
        array3[-1] = 1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    // std::cout << array3[1] << std::endl;
    
    return 0;
}