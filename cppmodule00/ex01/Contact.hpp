/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afanti <afanti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:59:13 by afanti            #+#    #+#             */
/*   Updated: 2023/08/30 11:45:36 by afanti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>


class Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;

    public:
        void setfirst_name(std::string first_name);
        void setlast_name(std::string last_name);
        void setnickname(std::string nick_name);
        void phonenumber(std::string phone_number);
        void darkest_secret(std::string darkest_secret);
        std::string getfirst_name(void);
        std::string getlast_name(void);
        std::string getnickname_name(void);
        std::string getphonenumber(void);
        std::string darkest_secret(void);
};

#endif /* CONTACT_HPP*/