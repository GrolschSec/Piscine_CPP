/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:45:46 by romain            #+#    #+#             */
/*   Updated: 2023/12/20 18:26:02 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <fstream>
# include <sstream>
# include <map>
# include <string>
# include <cstdlib>
# include <ctime>
# include <limits>

class BitcoinExchange {
	public:
		BitcoinExchange(void);
		~BitcoinExchange();
		bool	verifyDate(std::string const &date);
		bool	verifyRate(double const &rate);
		void	printMap(void)	const;
		class CouldNotOpenFileException : public std::exception {
			public:
				const char* what() const throw();
		};
		class InvalidDBHeaderException : public std::exception {
			public:
				const char* what() const throw();
		};
	private:
		std::map<std::string, double>	_db;
		BitcoinExchange(BitcoinExchange const &cp);
		BitcoinExchange	&operator=(BitcoinExchange const &rhs);
		unsigned int	getActualYear(void)	const;
		bool			isBisextile(int year)	const;
		bool			checkDay(int day, int month, bool isBisextile) const;
};
#endif