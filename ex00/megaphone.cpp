/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrahl <okrahl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:25:59 by okrahl            #+#    #+#             */
/*   Updated: 2024/03/25 17:04:01 by okrahl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			std::string arg = argv[i];
			for (size_t j = 0; j < arg.length(); ++j)
				std::cout << (char)std::toupper(arg[j]);
			if (i < argc - 1)
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	return 0;
}