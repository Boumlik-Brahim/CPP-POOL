/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:26:38 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/09 18:45:41 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	std::string		line;
	std::size_t		slenght;
	std::size_t		found;
	char			*s1;
	char			*s2;

	if (ac != 4)
	{
		std::cout << "ERROR" << std::endl;
		exit(1);
	}
	std::ifstream	init_file(av[1]);
	std::string 	filename = av[1];
	filename += ".replace";
	std::ofstream	out_file(filename);
	if (!out_file || !init_file)
		std::cout << "file creation failed" << std::endl;
	else
		std::cout << "files created succefully" << std::endl;
	s1 = av[2];
	s2 = av[3];
	std::getline(init_file, line, (char)EOF);
	slenght = strlen(s1);
	found = line.find(s1, 0, slenght);
	while (found != std::string::npos)
	{
		line.erase(found, slenght);
		line.insert(found, s2);
		// found = found + slenght;
		// std::cout << found << std::endl;
		found = line.find(s1, 0, slenght);
	}
	out_file << line ;
	return (0);
}
