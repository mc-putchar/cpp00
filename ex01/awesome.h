/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awesome.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:26:36 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/13 10:09:33 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AWESOME_H
# define AWESOME_H

# include <iostream>
# include <iomanip>
# include <string>
# include "PhoneBook.hpp"
# include "Contact.hpp"

# define MAX_CONTACTS 8
# define WELCOME_MSG		"Welcome to CrAP ==> Crappy Awesome Phonebook!\n"
# define PROMPT				"Say more, fam? (ADD, SEARCH, EXIT): "
# define BYE_MSG			"A'ight! Catch ya l8r!\n"
# define BANNER				" \n\
 $$$$$$\\             $$$$$$\\  $$$$$$$\\  \n\
$$  __$$\\           $$  __$$\\ $$  __$$\\ \n\
$$ /  \\__| $$$$$$\\  $$ /  $$ |$$ |  $$ |\n\
$$ |      $$  __$$\\ $$$$$$$$ |$$$$$$$  |\n\
$$ |      $$ |  \\__|$$  __$$ |$$  ____/ \n\
$$ |  $$\\ $$ |      $$ |  $$ |$$ |      \n\
\\$$$$$$  |$$ |      $$ |  $$ |$$ |      \n\
 \\______/ \\__|      \\__|  \\__|\\__|      \n\
                                        \n"
# define NO_CMD				"No way! " + command + " means nothing to me!\n"
# define NEW_CONTACT		"Save a new contact, awesome!\n"
# define SEARCH_CONTACT		"Search for a contact, awesome!\n"
# define NO_CONTACTS		"Sry m8, u got no contacts! :(\n"
# define WHICH_CONTACT		"Which contact do you want to see? (1-8): "
# define WRONG_CONTACT		"WTF?!? Yeah, nah. Aint got that here...\n"

Contact	create_new(void);
void	search(PhoneBook phonebook);
int		ft_stoi(str string);

#endif
