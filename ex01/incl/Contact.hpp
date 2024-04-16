/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:47:53 by okrahl            #+#    #+#             */
/*   Updated: 2024/03/27 21:51:46 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "MyAwesomePhonebook.hpp"

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

	public:
		Contact();
		~Contact();
		
		void	set_firstName(std::string first_name);
		void	set_lastName(std::string lastName);
		void	set_nickname(std::string nickname);
		void	set_phoneNumber(std::string phoneNumber);
		void	set_darkestSecret(std::string darkestSecret);

		void	display_contact_full(int index);
		void	display_contact_short(int index);
};

#endif