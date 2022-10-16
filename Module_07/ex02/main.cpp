/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:30:21 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/16 16:42:17 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Array.hpp"

int main( void )
{
    Array<int> array1(5);
    array1[0] = 1;
    array1[1] = 2;
    array1[2] = 3;
    array1[3] = 4;
    array1[4] = 5;

    std::cout << "array1 ======> " << array1.size() << std::endl;
    std::cout << "array1[0] ======> " << array1[0] << std::endl;
    std::cout << "array1[1] ======> " << array1[1] << std::endl;
    std::cout << "array1[2] ======> " << array1[2] << std::endl;
    std::cout << "array1[3] ======> " << array1[3] << std::endl;
    std::cout << "array1[4] ======> " << array1[4] << std::endl;

    Array<int> array2(array1);
    std::cout << "array2 ======> " << array2.size() << std::endl;
    std::cout << "array2[0] ======> " << array2[0] << std::endl;
    std::cout << "array2[1] ======> " << array2[1] << std::endl;
    std::cout << "array2[2] ======> " << array2[2] << std::endl;
    std::cout << "array2[3] ======> " << array2[3] << std::endl;
    std::cout << "array2[4] ======> " << array2[4] << std::endl;

    Array<int> array3(2);
    std::cout << "sizeofarray3 ======> " << array3.size() << std::endl ;

    try
    {
        array3[0] = 1;
        array3[1] = 2;
        // array3[2] = 3;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "array3[0] ======> " << array3[0] << std::endl;
    std::cout << "array3[1] ======> " << array3[1] << std::endl;

    array1 = array3;
    std::cout << "sizeofarray1 ======> " << array1.size() << std::endl ;
    // try
    // {
    //     array3[-1] = 1;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    std::cout << "array1[0] ======> " << array1[0] << std::endl;
    std::cout << "array1[1] ======> " << array1[1] << std::endl;

    Array<char> array4(2);
    array4[0] = 'a';
    array4[1] = 'b';
    std::cout << "array4 ======> " << array4.size() << std::endl;
    std::cout << "array4[0] ======> " << array4[0] << std::endl;
    std::cout << "array4[1] ======> " << array4[1] << std::endl;

    return 0;
}