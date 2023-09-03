/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 09:36:24 by afanti            #+#    #+#             */
/*   Updated: 2023/08/30 09:36:26 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook obj2;
    Contact obj1;
    std::string input;
    int i;
    int d;

    i = 0;
    d = 0;
    while (1)
    {
        if (i > d)
            d = i;
        if (i == 8)
            i = 0;
        std::cout << "Efficiently manage your contacts. Seamlessly add new contacts and quickly find the information you need." << std::endl;
        std::cout << "ADD: to save a new contact" << std::endl;
        std::cout << "SEARCH: to display a specific contact" << std::endl;
        std::cout << "EXIT: to exit from the program" << std::endl;
        std::cout << "enter your command: ";

        std::getline(std::cin, input);
        if (std::cin.eof())
            break;
        if (input.compare("ADD") == 0)
        {
            obj2.add(i);
            if (obj2.check_contac(i) == 0)
                i++;
        }
        else if (input.compare("SEARCH") == 0)
        {
            obj2.search(d);
        }
        else if (input.compare("EXIT") == 0)
            break ;
        else
            std::cout << "Invalid input" << std::endl;
        std::cout << i << std::endl;
    }

    return (0);
}