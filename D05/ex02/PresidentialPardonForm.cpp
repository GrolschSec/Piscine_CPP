/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:30:09 by romain            #+#    #+#             */
/*   Updated: 2023/12/08 21:00:31 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/******************************************************************************/

PresidentialPardonForm::PresidentialPardonForm(void)
	: AForm("PresidentialPardonForm", "Unknown", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: AForm("PresidentialPardonForm", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cp)
	: AForm(cp) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	AForm::operator=(rhs);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

/******************************************************************************/

void	PresidentialPardonForm::executeAction(Bureaucrat const & executor) {
	execute(executor);
	std::ofstream	file((this->getTarget() + "_shrubbery").c_str());

	if (!file)
		throw std::ofstream::failure();
	file         
		<< "		t			  t\n"
		<< "       .#.			 .#.\n"
		<< "      .###.		    .###.\n"
		<< "     .#%##%.	   .#%##%.\n"
		<< "    .%##%###.	  .%##%###.\n"
		<< "   .##%###%##. 	 .##%###%##.\n"
		<< "  .#%###%##%##.	.#%###%##%##.\n"
		<< "        #			  #\n"
		<< "        #			  #"
		<< std::endl;
}
