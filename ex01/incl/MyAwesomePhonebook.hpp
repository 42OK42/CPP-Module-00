/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhonebook.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:54:52 by okrahl            #+#    #+#             */
/*   Updated: 2024/03/27 15:26:49 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_AWESOME_PHONEBOOK_HPP
# define MY_AWESOME_PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include <unistd.h>
# include <cstdio>

# include "Contact.hpp"
# include "Phonebook.hpp"

std::string	getValidInput(const std::string& prompt);
void		clean_string(std::string& str);

#endif