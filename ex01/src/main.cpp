/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:45:06 by okrahl            #+#    #+#             */
/*   Updated: 2024/03/27 23:19:52 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MyAwesomePhonebook.hpp"

void	clean_string(std::string& string)
{
	for (size_t i = 0; i < string.size(); i++)
	{
		if (string[i] >= 9 && string[i] <= 13)// isspace
			string[i] = ' ';
	}
}

std::string	getValidInput(const std::string& prompt)
{
	std::string input;
	while (true)
	{
		std::cout << "\033[32m" << prompt << ":\t \033[0m";
		std::getline(std::cin, input);
		if(std::cin.eof())
			break ;
		clean_string(input);
		if ((input.find_first_not_of(' ') != std::string::npos))
			break ;
	}
	return (input);
}

int main(void)
{
	Phonebook	phonebook;
	std::string	input;

	while (1)
	{
		if(std::cin.eof())
			break ;
		std::cout << "\033[34mCommand [ADD, SEARCH or EXIT]: \033[0m";
		
		std::getline(std::cin, input);

		if (input == "ADD")
			phonebook.create_new_contact();
		else if (input == "SEARCH")
			phonebook.display_phonebook();
		else if (input == "EXIT")
			break ;
	}
}