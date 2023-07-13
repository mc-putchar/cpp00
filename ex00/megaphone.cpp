/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 01:28:48 by mcutura           #+#    #+#             */
/*   Updated: 2023/07/12 02:07:02 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*yell(char *word)
{
	int	i;

	i = -1;
	while (word[++i])
		word[i] = toupper(word[i]);
	return (word);
}

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE NOISE *";
	else
		for (int i = 1; i < ac; ++i)
			std::cout << yell(av[i]);
	std::cout << "\n";
}
