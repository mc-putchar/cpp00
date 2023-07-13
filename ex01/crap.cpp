/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:24:53 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/13 08:51:11 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awesome.h"

int	main(void)
{
	PhoneBook	phonebook;
	str			command;

	std::cout << std::setfill(' ') << std::setw(50) << BANNER;
	std::cout << WELCOME_MSG << std::endl;
	while (1)
	{
		std::cout << PROMPT;
		std::getline(std::cin, command);
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			phonebook.add_contact(create_new());
		else if (command == "SEARCH")
			search(phonebook);
		else
			std::cout << NO_CMD;
	}
	std::cout << BYE_MSG;
	return (0);
}

Contact	create_new(void)
{
	str	first_name;
	str	last_name;
	str	nickname;
	str	phone_number;
	str	darkest_secret;

	std::cout << NEW_CONTACT;
	std::cout << "First name: ";
	std::getline(std::cin, first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkest_secret);
	return (Contact(first_name, last_name, nickname, \
					phone_number, darkest_secret));
}

void	search(PhoneBook phonebook)
{
	str			input;
	int			i;

	std::cout << SEARCH_CONTACT;
	if (!phonebook.get_contacts_stored())
	{
		std::cout << NO_CONTACTS;
		return ;
	}
	phonebook.search_contact();
	std::cout << WHICH_CONTACT;
	std::getline(std::cin, input);
	i = ft_stoi(input);
	if (i < 0 || i > 7)
	{
		std::cout << WRONG_CONTACT;
		return ;
	}
	phonebook.display_contact(i);
}

static int	loopity(str string, int i)
{
	if (!i)
		return (0);
	--i;
	return ((string[i] - '0') + 10 * loopity(string, i));
}

int	ft_stoi(str string)
{
	int		i;
	int		neg;

	i = 0;
	neg = 1;
	if (string[i] == '-' || string[i] == '+')
		if (string[i++] == '-')
			neg = -1;
	while (string[i] >= '0' && string[i] <= '9')
		++i;
	return (neg * loopity(string, i));
}
