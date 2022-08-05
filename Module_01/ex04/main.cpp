/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:26:38 by bbrahim           #+#    #+#             */
/*   Updated: 2022/08/05 14:39:15 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include<fstream>

int main(int ac, char **av)
{
    std::fstream newfile;
    
    if (ac == 1)
        std::cout << "ERROR" << std::endl;
    else
    {
        newfile.open(av[1], std::ios::out);
        if(!newfile)
        {
            std::cout << "file creation failed" << std::endl;
        }
        else
        {
            std::cout << "new file created" << std::endl;
            newfile << av[2] ;
            newfile.close();
        }
    }
    return(0);
}
