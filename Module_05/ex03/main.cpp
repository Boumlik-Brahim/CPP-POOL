/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrahim <bbrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:05:44 by bbrahim           #+#    #+#             */
/*   Updated: 2022/10/02 15:15:22 by bbrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main()
{
    // Bureaucrat bureau;
    // ShrubberyCreationForm shrub("home");
    // RobotomyRequestForm robotomy("home");
    // PresidentialPardonForm presidential("home");

    // try
    // {
    //     std::cout << "name: " << shrub.getName() << "sign: " << shrub.getGradesigned() << " exec: " << shrub.getGradexecute() << " signd: " << shrub.getSignd() << std::endl;
    //     shrub.execute(bureau);
    //     bureau.executeForm(shrub);
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }

    // try
    // {
    //     std::cout << "name: " << robotomy.getName() << "sign: " << robotomy.getGradesigned() << " exec: " << robotomy.getGradexecute() << " signd: " << robotomy.getSignd() << std::endl;
    //     robotomy.execute(bureau);
    //     bureau.executeForm(robotomy);
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }

    // try
    // {
    //     std::cout << "name: " << presidential.getName() << "sign: " << presidential.getGradesigned() << " exec: " << presidential.getGradexecute() << " signd: " << presidential.getSignd() << std::endl;
    //     presidential.execute(bureau);
    //     bureau.executeForm(presidential);
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }

    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");

    return 0;
}