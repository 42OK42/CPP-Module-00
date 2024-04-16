/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:48:44 by okrahl            #+#    #+#             */
/*   Updated: 2024/03/27 23:16:53 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MyAwesomePhonebook.hpp"

Phonebook::Phonebook(void)
{
	//std::cout << "Phonebook constructed" << std::endl;
	this->contactsCount = 0;
}

Phonebook::~Phonebook(void)
{
	//std::cout << "Phonebook deconstructed" << std::endl;
}

void		Phonebook::add_contact(Contact contact)
{
	if (this->contactsCount <= 7)
	{
		this->contacts[contactsCount] = contact;
		contactsCount++;
	}
	else
	{
		for (size_t i = 0; i <= 7; i++)
			this->contacts[i] = this->contacts[i + 1];
		this->contacts[7] = contact;
	}
}

void Phonebook::create_new_contact(void)
{
	Contact	new_contact;
	std::string	input;

	new_contact.set_firstName(getValidInput("First Name"));
	new_contact.set_lastName(getValidInput("Last Name"));
	new_contact.set_nickname(getValidInput("Nickname"));
	new_contact.set_phoneNumber(getValidInput("Phone Number"));
	new_contact.set_darkestSecret(getValidInput("Darkest Secret"));

	add_contact(new_contact);
}

void		Phonebook::display_phonebook(void)
{
	if (this->contactsCount == 0)
	{
		std::cout << "\033[31mThe Phone Book is empty. Please add Contacts first.\n\033[0m";
		return ;
	}
	std::cout << "\033[95m|-------------------------------------------|\n";
	std::cout << "|                PHONE  BOOK                |\n";
	std::cout << "|-------------------------------------------|\n";
	for (int i = 0; i < this->contactsCount ; i++)
		this->contacts[i].display_contact_short(i);
	std::cout << "|-------------------------------------------|\n\033[0m";
	
	while (42)
	{
		std::string input;
		std::cout << "\033[34mEnter Index of contact to display:\033[0m\t ";
		std::getline(std::cin, input);
		int index = atoi(input.c_str()) - 1;
		if (index >= 0 && index < this->contactsCount)
		{
			this->contacts[index].display_contact_full(index);
			break;
		}
		else
			std::cout << "\033[31mError: Index out of range\033[0m\t " <<  std::endl;
	}
}