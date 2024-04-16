/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:47:57 by okrahl            #+#    #+#             */
/*   Updated: 2024/03/27 22:33:20 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "MyAwesomePhonebook.hpp"

class Phonebook
{
	private:
		Contact		contacts[8];
		int			contactsCount;

	public:
		Phonebook();
		~Phonebook();

		void		create_new_contact(void);
		void		add_contact(Contact contact);
		void		display_phonebook(void);
};

#endif