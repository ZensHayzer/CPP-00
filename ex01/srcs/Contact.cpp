/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:38:31 by ajeanne           #+#    #+#             */
/*   Updated: 2023/05/30 17:09:54 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

Contact::Contact(void)	{
}

Contact::~Contact(void)	{
}

std::string Contact::GetFName(void) const	{
	return this->_first_name;
}

std::string Contact::GetLName(void) const	{
	return this->_last_name;
}

std::string Contact::GetNName(void) const	{
	return this->_nickname;
}

std::string Contact::GetPN(void) const	{
	return this->_phone_number;
}

std::string Contact::GetDS(void) const	{
	return this->_darkest_secret;
}

int	Contact::SetFName(std::string Fname)	{
	int	i;
	
	i = 0;
	if (!Fname[0])
	{
		std::cout << "First Name can't be empty" << std::endl;
		return 1;
	}
	while (Fname[i])	{
		if (!isalpha(Fname[i]))	{
			std::cout << "You mush have only Alpha character in your First Name" << std::endl;
			return 1;
		}
		i++;
	}
	this->_first_name = Fname;
	return 0;
}

int	Contact::SetLName(std::string Lname)	{
	int	i;
	
	i = 0;
	if (!Lname[0])
	{
		std::cout << "Last Name can't be empty" << std::endl;
		return 1;
	}
	while (Lname[i])	{
		if (!isalpha(Lname[i]))	{
			std::cout << "You mush have only Alpha character in your Last Name" << std::endl;
			return 1;
		}
		i++;
	}
	this->_last_name = Lname;
	return 0;
}

int	Contact::SetNName(std::string Nname)	{
	if (!Nname[0])
	{
		std::cout << "Nickname can't be empty" << std::endl;
		return 1;
	}
	this->_nickname = Nname;
	return 0;
}

int	Contact::SetPN(std::string PN)	{
	int	i;
	
	i = 0;
	if (!PN[0])
	{
		std::cout << "Phone Number can't be empty" << std::endl;
		return 1;
	}
	while (PN[i])	{
		if (!isdigit(PN[i]))	{
			std::cout << "You mush have only Numeric character in your Phone Number" << std::endl;
			return 1;
		}
		i++;
	}
	this->_phone_number = PN;
	return 0;
}

int	Contact::SetDS(std::string DarkestS)	{
	if (!DarkestS[0])
	{
		std::cout << "Darkest Secret can't be empty" << std::endl;
		return 1;
	}
	this->_darkest_secret = DarkestS;
	return 0;
}

void	Contact::FillContact(void)	{
	std::string	answer;
	
	std::cout << "Enter your First Name : ";
	std::getline(std::cin, answer);
	if (std::cin.eof())	{
		std::cout << "EOF detected." << std::endl;
		return;		
	}
	std::cout << std::endl;
	while (this->SetFName(answer))	{
		std::cout << "Enter your First Name : ";
		std::getline(std::cin, answer);
		if (std::cin.eof())	{
			std::cout << "EOF detected." << std::endl;
			return;		
		}
		std::cout << std::endl;
	}
	std::cout << "Enter your Last Name : ";
	std::getline(std::cin, answer);
	if (std::cin.eof())	{
		std::cout << "EOF detected." << std::endl;
		return;		
	}
	std::cout << std::endl;
	while (this->SetLName(answer))	{
		std::cout << "Enter your Last Name : ";
		std::getline(std::cin, answer);
		if (std::cin.eof())	{
			std::cout << "EOF detected." << std::endl;
			return;		
		}
		std::cout << std::endl;
	}
	std::cout << "Enter your Nickname : ";
	std::getline(std::cin, answer);
	if (std::cin.eof())	{
		std::cout << "EOF detected." << std::endl;
		return;		
	}
	std::cout << std::endl;
	while (this->SetNName(answer))	{
		std::cout << "Enter your Nickname : ";
		std::getline(std::cin, answer);
		if (std::cin.eof())	{
			std::cout << "EOF detected." << std::endl;
			return;		
		}
		std::cout << std::endl;
	}
	std::cout << "Enter your Phone Number : ";
	std::getline(std::cin, answer);
	if (std::cin.eof())	{
		std::cout << "EOF detected." << std::endl;
		return;		
	}
	std::cout << std::endl;
	while (this->SetPN(answer))	{
		std::cout << "Enter your Phone Number : ";
		std::getline(std::cin, answer);
		if (std::cin.eof())	{
			std::cout << "EOF detected." << std::endl;
			return;		
		}
		std::cout << std::endl;
	}
	std::cout << "Enter your Darkest Secret : ";
	std::getline(std::cin, answer);
	if (std::cin.eof())	{
		std::cout << "EOF detected." << std::endl;
		return;		
	}
	std::cout << std::endl;
	while (this->SetDS(answer))	{
		std::cout << "Enter your Darkest Secret : ";
		std::getline(std::cin, answer);
		if (std::cin.eof())	{
			std::cout << "EOF detected." << std::endl;
			return;		
		}
		std::cout << std::endl;
	}
	
	return;
}

void	Contact::PrintContact(void) const	{
	std::cout << "First Name : " << this->_first_name << std::endl;
	std::cout << "Last Name : " << this->_last_name << std::endl;
	std::cout << "Nickname : " << this->_nickname << std::endl;
	std::cout << "Phone Number : " << this->_phone_number << std::endl;
	std::cout << "Darkest Secret : " << this->_darkest_secret << std::endl;
	std::cout << std::endl;

	return;
}