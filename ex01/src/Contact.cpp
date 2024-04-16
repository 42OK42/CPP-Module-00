/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:48:17 by okrahl            #+#    #+#             */
/*   Updated: 2024/03/27 23:08:07 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MyAwesomePhonebook.hpp"

Contact::Contact(void)
{
	//std::cout << "Contcact constructed" << std::endl;
}

Contact::~Contact(void)
{
	//std::cout << "Contcact deconsturcted" << std::endl;
}

void	Contact::set_firstName(std::string firstName)
{
	this->_firstName = firstName;
}

void	Contact::set_lastName(std::string lastName)
{
	this->_lastName = lastName;
}

void	Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::set_phoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void	Contact::set_darkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

void	Contact::display_contact_full(int index)
{
	std::cout << "\033[32mIndex:\t\t " << index + 1<< std::endl;
	std::cout << "First Name:\t " << this->_firstName << std::endl;
	std::cout << "Last Name:\t " << this->_lastName << std::endl;
	std::cout << "Nickname:\t " <<this->_nickname << std::endl;
	std::cout << "Phone Number:\t " <<this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret:\t " <<this->_darkestSecret << std::endl;
}

void	Contact::display_contact_short(int index)
{
	std::string firstName = this->_firstName.length() > 10 ? this->_firstName.substr(0,9) + "." : this->_firstName;
	std::string	lastName = this->_lastName.length() > 10 ? this->_lastName.substr(0, 9) + "." : this->_lastName;
	std::string	nickname = this->_nickname.length() > 10 ? this->_nickname.substr(0, 9) + "." : this->_nickname;

	std::cout << "|" << std::setw(10) << std::right << index + 1 << "|";
	std::cout << std::setw(10) << std::right << firstName << "|";
	std::cout << std::setw(10) << std::right << lastName << "|";
	std::cout << std::setw(10) << std::right << nickname << "|" << std::endl; 
}
