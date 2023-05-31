/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:53:37 by ajeanne           #+#    #+#             */
/*   Updated: 2023/05/30 17:06:52 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)	{
	std::string	answer;
	PhoneBook	phonebook = PhoneBook();
	
	std::cout << "/-----------------------\\" << std::endl;
	std::cout << "| Welcome in PhoneBook  |" << std::endl;
	std::cout << "\\-----------------------/" << std::endl;
	std::cout << "Enter a command (ADD / SEARCH / EXIT) : ";
	std::getline(std::cin, answer);
	if (std::cin.eof())	{
		std::cout << "EOF detected." << std::endl;
		return (0);		
	}
	std::cout << std::endl;
	
	while (answer != "EXIT")
	{
		if (answer == "ADD")
			phonebook.add_contact();
		else if (answer == "SEARCH")
			phonebook.search_contact();
		else
			std::cout << "Command not found." << std::endl;
		std::cout << "Enter a command (ADD / SEARCH / EXIT) : ";
		std::getline(std::cin, answer);
		if (std::cin.eof())	{
			std::cout << "EOF detected." << std::endl;
			return (0);		
		}
	}
	return 0;
}