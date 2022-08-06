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

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	std::fstream 	newfile;
	std::ifstream 	init_file;
	std::ofstream	out_file;
	std::string 	line;
	char			*s1;
	char			*s2;
	char			ch;

	if (ac == 1)
		std::cout << "ERROR" << std::endl;
	else
	{
		s1 = av[2];
		s2 = av[3];

		init_file.open("file.txt", std::ios::in | std::ios::out);
		if (!init_file)
			std::cout << "file creation failed" << std::endl;
		else
			std::cout << "new file created" << std::endl;

		out_file.open("file.replace",std::ios::out);
		if (!out_file)
			std::cout << "file creation failed" << std::endl;
		else
			std::cout << "new file created" << std::endl;

		if (init_file && out_file)
		{
			while (std::getline(init_file, line))
			{
				ch = init_file.get();
				if(ch == s1[0])
				{
					int i;
					i = -1;

					while(s1[++i])
					{
						ch = init_file.get();
						std::cout << ch;
						if(ch == s1[i])
							out_file << av[3] << std::endl;
					}
				}
				else 
					out_file << line << std::endl;
			}
			std::cout << "copy finished" << std::endl;
		}
		else
			std::cout << "cannot read file" << std::endl;
		
		init_file.close();
		out_file.close();
	}
	return (0);
}
