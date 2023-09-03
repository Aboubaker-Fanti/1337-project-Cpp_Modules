/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:05:25 by afanti            #+#    #+#             */
/*   Updated: 2023/08/30 14:44:02 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook :: add(int i)
{
    int y;

    y = 0;
    std::string name;
    std::cout << "enter your First Name: ";
    std::getline(std::cin, name);
    if (name[0] == '\0')
        y++;
    std::string nam;
    std::cout << "enter your Last Name: ";
    std::getline(std::cin, nam);
    if (nam[0] == '\0')
        y++;
    std::string namee;
    std::cout << "enter your Nickname: ";
    std::getline(std::cin, namee);
    if (namee[0] == '\0')
        y++;
    std::string str;
    std::string namestring;
    std::cout << "enter your darkest secret: ";
    std::getline(std::cin, namestring);
    if (namestring[0] == '\0')
        y++;
    std::cout << "enter your Number Phone: ";
    std::getline(std::cin, str);
    if (str[0] == '\0')
        y++;
    for (int o = 0; o < str.length(); o++) {
        if(!isdigit(str[o]))
        {
          std::cout << "error in your phone number";
          y++;
          break ;
        }
    }
    if (y == 0)
    {
        Contacts[i].setfirst_name(name);
        Contacts[i].setlast_name(nam);
        Contacts[i].setnickname(namee);
        Contacts[i].phonenumber(str);
        Contacts[i].darkest_secret(namestring);
    }
}

void    PhoneBook::search(int d)
{
    int i;
    std::string name;

    i = 0;
    std::cout << " KJFGKJHDKJFGHKJD=>" <<  d << std::endl;
    std::cout << "  index   |first name| last name| nickname |" << std::endl;
    while (d > i)
    {
        std::cout << std::setw(10) << i << "|";
        if (Contacts[i].getfirst_name().length() > 9)
        {
            std::string substring = Contacts[i].getfirst_name().substr(0, 9);
            substring += '.';
            std::cout << substring << "|";
        }
        else
            std::cout << std::setw(10) << Contacts[i].getfirst_name() << "|";
        if (Contacts[i].getlast_name().length() > 9)
        {
            std::string string = Contacts[i].getlast_name().substr(0, 9);
            string += '.';
            std::cout << string << "|";
        }
        else
            std::cout << std::setw(10) << Contacts[i].getlast_name() << "|";
        if (Contacts[i].getnickname_name().length() > 9)
        {
            std::string substr = Contacts[i].getnickname_name().substr(0, 9);
            substr += '.';
            std::cout << substr << "|" << std::endl;
        }
        else
            std::cout << std::setw(10) << Contacts[i].getnickname_name() << "|" << std::endl;
        i++;
    }
    std::cout << "enter index to display the contact: ";
    std::getline(std::cin, name);
    for (int o = 0; o < name.length(); o++) {
      if(!isdigit(name[o]))
      {
        i = -1;
        break ;
      }
        i = std::stoi(name);
   }
    if (i >= d || i < 0)
        std::cout << "error there is no contact with this index" << std::endl;
    else
    {
        std::cout << "First Name: " << Contacts[i].getfirst_name() << std::endl;
        std::cout << "Last Name: " << Contacts[i].getlast_name() << std::endl;
        std::cout << "NickName: " << Contacts[i].getnickname_name() << std::endl;
        std::cout << "Phone Number: " << Contacts[i].getphonenumber() << std::endl;
        std::cout << "Darkest Secret: " << Contacts[i].darkest_secret() << std::endl;
    }
}

int    PhoneBook::check_contac(int d)
{
    if (Contacts[d].getfirst_name().length() > 0)
        return (0);
    return (1);
}
