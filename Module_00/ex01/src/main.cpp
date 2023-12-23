/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 19:26:24 by vhovhann          #+#    #+#             */
/*   Updated: 2023/12/23 21:42:23 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	int			i = 0;
	int			count = 0;
	PhoneBook	a;
	std::string	input;

	while (1)
	{
		std::cout << "Command ADD: Added new Contact." << std::endl;
		std::cout << "Command SEARCH: searching and showing contacts." << std::endl;
		std::cout << "Command EXIT: Closing programm." << std::endl;
		std::cout << std::endl;
		getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "Exit the program!\n" << "You pressed ctrl+D." << std::endl;
			exit (1);
		}
		if (input == "ADD")
		{
			a.add(i);
			i++;
			if (count < 8)
				count++;
			if (i == 8)
				i = 0;
		}
	}
}