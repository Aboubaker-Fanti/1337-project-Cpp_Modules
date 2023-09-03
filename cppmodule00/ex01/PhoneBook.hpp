/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:59:09 by afanti            #+#    #+#             */
/*   Updated: 2023/08/29 19:26:44 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string> 
# include "Contact.hpp"
#include <cstring>
#include <iomanip>

class PhoneBook
{
    private:
        Contact Contacts[8];
    
    public:
        void    add(int i);
        void    search(int d);
        int     check_contac(int g);

};

#endif /* PHONEBOOK_HPP */