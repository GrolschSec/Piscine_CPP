/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:02:06 by romain            #+#    #+#             */
/*   Updated: 2023/12/09 11:21:43 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void) {
	Bureaucrat	tom("tom", 5);
	Intern		lebleu;
	AForm		*f1;
	AForm		*f2;
	AForm		*f3;

	f1 = lebleu.makeForm("presidential pardon", "Bender");
	f2 = lebleu.makeForm("robotomy request", "Bender");
	f3 = lebleu.makeForm("shrubbery creation", "Bender");

	tom.signForm(*f1);
	tom.executeForm(*f1);
	tom.executeForm(*f2);
	tom.signForm(*f3);
	tom.executeForm(*f3);

	delete f1;
	delete f2;
	delete f3;
}
