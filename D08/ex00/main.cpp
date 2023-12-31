/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:11:47 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/12/19 17:40:50 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char*	ElementNotFoundException::what() const throw() {
	return ("element not found.");
}

int main(void) {
	std::vector<int> t1;
	for (int i = 0; i < 5; i++) {
		t1.push_back(5 - i);
	}
	try {
		easyfind(t1, 99494);
		std::cout
			<< "[Vector] - Element was found!"
			<< std::endl;
	} catch (ElementNotFoundException &e) {
		std::cerr
			<< "[Vector] - Exception caught: "
			<< e.what()
			<< std::endl;
	}

	std::list<int>	t3;
	for (int i = 0; i < 5; i++) {
		t3.push_back(5 - i);
	}
	try {
		easyfind(t3, 3);
		std::cout 
			<< "[List] - Element was found!" 
			<< std::endl;
	} catch (ElementNotFoundException &e) {
		std::cerr 
			<< "[List] - Exception caught: " 
			<< e.what() 
			<< std::endl;
    }
	return (0);
}
