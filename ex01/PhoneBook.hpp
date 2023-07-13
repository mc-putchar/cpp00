/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 02:14:45 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/13 10:05:57 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

# define MAX_CONTACTS 8

class PhoneBook
{
	private:
		Contact		contacts[MAX_CONTACTS];
		int			contacts_stored;
	public:
		PhoneBook(void) { this->contacts_stored = 0; };
		~PhoneBook() {};

		void		add_contact(Contact contact);
		void		search_contact(void);
		void		display_contact(int index);
		int			get_contacts_stored(void) { return this->contacts_stored; };
};

void	PhoneBook::add_contact(Contact contact)
{
	this->contacts[this->contacts_stored % MAX_CONTACTS] = contact;
	this->contacts_stored++;
}

static str	truncate(str string, size_t size)
{
	if (string.length() > size)
		return (string.substr(0, size - 1) + ".");
	return (string);
}

void	PhoneBook::search_contact(void)
{
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << \
	"first name" << "|" << std::setw(10) << "last name" << "|" << \
	std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < this->contacts_stored; ++i)
	{
		std::cout << std::setw(10) << i % MAX_CONTACTS << "|" << std::setw(10) << \
		truncate(this->contacts[i].get_first_name(), 10) << "|" << std::setw(10) << \
		truncate(this->contacts[i].get_last_name(), 10) << "|" << std::setw(10) << \
		truncate(this->contacts[i].get_nickname(), 10) << std::endl;
	}
}

void	PhoneBook::display_contact(int index)
{
	if (index >= this->contacts_stored % MAX_CONTACTS)
		std::cout << "Hmmm... I don't know this one." << std::endl;
	else
		std::cout << this->contacts[index].display_contact();
}

#endif