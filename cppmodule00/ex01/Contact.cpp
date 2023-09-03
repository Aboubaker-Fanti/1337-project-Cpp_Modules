/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:05:33 by afanti            #+#    #+#             */
/*   Updated: 2023/08/29 18:58:25 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact :: setfirst_name(std::string first_name)
{
       _first_name = first_name; 
}

void    Contact :: setlast_name(std::string last_name)
{
   _last_name = last_name; 
}

void    Contact :: setnickname(std::string nickname)
{
    _nickname = nickname;
}

void    Contact :: phonenumber(std::string  phone_number)
{
    _phone_number = phone_number;
} 

void    Contact :: darkest_secret(std::string darkest_secret)
{
    _darkest_secret= darkest_secret;
} 

std::string Contact::getfirst_name(void)
{
     return (_first_name);
}

std::string Contact::getlast_name(void)
{
     return (_last_name);
}

std::string Contact::getnickname_name(void)
{
     return (_nickname);
}

std::string Contact::getphonenumber(void)
{
     return (_phone_number);
}

std::string Contact::darkest_secret(void)
{
    return (_darkest_secret);
}
