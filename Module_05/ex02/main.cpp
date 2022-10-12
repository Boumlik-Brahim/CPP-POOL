/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:05:44 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/12 15:25:03 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat bureau;

    // try
    // {
    //     ShrubberyCreationForm shrub("home");
    //     std::cout << "name: " << shrub.getName() << " sign: " << shrub.getGradesigned() << " exec: " << shrub.getGradexecute() << " signd: " << shrub.getSignd() << std::endl;
    //     shrub.execute(bureau);
    //     bureau.executeForm(shrub);
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }

    // try
    // {
    //     RobotomyRequestForm robotomy("home");
    //     std::cout << "name: " << robotomy.getName() << " sign: " << robotomy.getGradesigned() << " exec: " << robotomy.getGradexecute() << " signd: " << robotomy.getSignd() << std::endl;
    //     robotomy.execute(bureau);
    //     bureau.executeForm(robotomy);
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }

    // try
    // {
    //     PresidentialPardonForm presidential("home");
    //     std::cout << "name: " << presidential.getName() << " sign: " << presidential.getGradesigned() << " exec: " << presidential.getGradexecute() << " signd: " << presidential.getSignd() << std::endl;
    //     presidential.execute(bureau);
    //     bureau.executeForm(presidential);
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }

    return 0;
}