/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 02:19:30 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/13 09:51:37 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

# define str std::string

class Contact
{
	private:
		str		first_name;
		str		last_name;
		str		nickname;
		str		phone_number;
		str		darkest_secret;
	public:
		Contact(void) {};
		Contact(str first_name, str last_name, str nickname, \
				str phone_number, str darkest_secret);
		~Contact() {};

		str		get_first_name(void) { return this->first_name; };
		str		get_last_name(void) { return this->last_name; };
		str		get_nickname(void) { return this->nickname; };
		str		get_phone_number(void) { return this->phone_number; };
		str		get_darkest_secret(void) { return this->darkest_secret; };
		str		display_contact(void);
};

Contact::Contact(str first_name, str last_name, str nickname, \
				str phone_number, str darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

str Contact::display_contact(void)
{
	str output;

	output = "First name: " + this->first_name + "\n";
	output += "Last name: " + this->last_name + "\n";
	output += "Nickname: " + this->nickname + "\n";
	output += "Phone number: " + this->phone_number + "\n";
	output += "Darkest secret: " + this->darkest_secret + "\n";
	return output;
}

#endif
