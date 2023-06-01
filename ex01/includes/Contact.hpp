/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:31:52 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/01 13:17:56 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <iostream>
#include <iomanip>

class Contact	{
	public:
		Contact(void);
		~Contact(void);
		
		void	FillContact(void);
		void	PrintContact(void) const;
		
		std::string GetFName(void) const;
		std::string GetLName(void) const;
		std::string GetNName(void) const;
		std::string GetPN(void) const;
		std::string GetDS(void) const;
		
		int		SetFName(std::string Fname);
		int		SetLName(std::string Lname);
		int		SetNName(std::string Nname);
		int		SetPN(std::string PhoneNB);
		int		SetDS(std::string DarkestS);
		
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};

#endif