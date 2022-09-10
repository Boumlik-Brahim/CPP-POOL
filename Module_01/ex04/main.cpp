/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:26:38 by bbrahim           #+#    #+#             */
/*   Updated: 2022/09/10 10:10:42 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void ft_replace(char	*s1, char	*s2, std::string	&line, std::ofstream	&out_file)
{
	std::size_t		slenght;
	std::size_t		found;
	
	slenght = strlen(s1);
	found = line.find(s1, 0, slenght);
	while (found != std::string::npos)
	{
		if (strlen(s1) == 0)
			break ;
		line.erase(found, slenght);
		line.insert(found, s2);
		found = line.find(s1, 0, slenght);
	}
	out_file << line ;
}

int main(int ac, char **av)
{
	std::string		line;

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
	std::getline(init_file, line, (char)EOF);
	ft_replace(av[2], av[3], line, out_file);
	return (0);
}
