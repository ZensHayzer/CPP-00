/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:11:09 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/01 13:09:32 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)	{
	_nb_contact = 0;
}

PhoneBook::~PhoneBook(void)	{
}

int	PhoneBook::GetNbContact(void) const	{
	return this->_nb_contact;
}

void	PhoneBook::add_contact(void)	{
	this->_clist[_nb_contact % 8].FillContact();
	this->_nb_contact += 1;
	return;
}

void	PhoneBook::search_contact(void)	{
	std::string	answer;
	std::string	fname;
	std::string	lname;
	std::string	nname;
	
	if (this->_nb_contact == 0)	{
		std::cout << "No existing contact" << std::endl;
		return;
	}
	std::cout << std::setw(10) << "Index" << "|" 
		<< std::setw(10) << "First Name" << "|"
		<< std::setw(10) << "Last Name" << "|"
		<< std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < this->_nb_contact && i < 8; i++)	{
		if (this->_clist[i].Contact::GetFName().length() > 10)	{
			fname = this->_clist[i].Contact::GetFName();
			fname.resize(9);
			fname.resize(10, '.');
		}
		else
			fname = this->_clist[i].Contact::GetFName();
		if (this->_clist[i].Contact::GetLName().length() > 10)	{
			lname = this->_clist[i].Contact::GetLName();
			lname.resize(9);
			lname.resize(10, '.');
		}
		else
			lname = this->_clist[i].Contact::GetLName();
		if (this->_clist[i].Contact::GetNName().length() > 10)	{
			nname = this->_clist[i].Contact::GetNName();
			nname.resize(9);
			nname.resize(10, '.');
		}
		else
			nname = this->_clist[i].Contact::GetNName();
		std::cout << std::setw(10) << i << "|"
			<< std::setw(10) << fname << "|"
			<< std::setw(10) << lname << "|"
			<< std::setw(10) << nname << "|" << std::endl;
	}
	std::cout << "Select a contact by typing his Index : ";
	std::getline(std::cin, answer);
	if (std::cin.eof())	{
		std::cout << "EOF detected." << std::endl;
		return;		
	}
	if (answer.size() == 1)	{
		for (int i = 0; i < this->_nb_contact; i++)	{
			if (answer.at(0) - 48 == i)	{
				this->_clist[i].Contact::PrintContact();
				return;
			}
		}
	}
	std::cout << "This contact doesn't exist" << std::endl << std::endl;
	return;
}