/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:29:30 by ajeanne           #+#    #+#             */
/*   Updated: 2023/05/30 15:00:52 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cstdlib>
#include <cstring>

class PhoneBook	{
public:
	PhoneBook(void);
	~PhoneBook(void);
	
	void	add_contact(void);
	void	search_contact(void);
	
	int		GetNbContact(void) const;

private:
	Contact	_clist[8];
	int		_nb_contact;
};