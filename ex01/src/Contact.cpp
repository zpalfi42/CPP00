/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpalfi <zpalfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:06:43 by zpalfi            #+#    #+#             */
/*   Updated: 2022/10/10 12:46:21 by zpalfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

std::string  Contact::add_info(std::string msg)
{
    std::string dest;
    
    std::cout << msg;
    while (42)
    {
        std::getline(std::cin, dest);
        dest.erase(0, dest.find_first_not_of(" \t\v\f\r"));
        while (isspace(dest.back()))
            dest.erase(dest.find_last_not_of(" \t\v\r\f") + 1, dest.back());
        if (dest.empty())
            std::cout << "Empty field not valid! Please, try again." << std::endl << msg;
        else
            break ;
    }
    return (dest);
}

Contact    Contact::add(Contact new_contact)
{
    new_contact.first_name = add_info("First name:");
    new_contact.last_name = add_info("Last name:");
    new_contact.nickname = add_info("Nickname:");
    new_contact.phone = add_info("Phone numer:");
    new_contact.secret = add_info("Darkest secret:");
    return (new_contact);
}

int     Contact::isnull(Contact contact)
{
    if (contact.first_name.empty())
        return (1);
    return (0);
}

void    Contact::print_info(Contact contact, int i)
{
    if (i == 1)
    {
        if (contact.first_name.size() > 10)
            std::cout << std::string(contact.first_name.begin(), contact.first_name.begin() + 9) << '.';
        else
            std::cout << std::setw(10) << contact.first_name;
    }
    if (i == 2)
    {
        if (contact.last_name.size() > 10)
            std::cout << std::string(contact.last_name.begin(), contact.last_name.begin() + 9) << '.';
        else
            std::cout << std::setw(10) << contact.last_name;
    }
    if (i == 3)
    {
        if (contact.nickname.size() > 10)
            std::cout << std::string(contact.nickname.begin(), contact.nickname.begin() + 9) << '.';
        else
            std::cout << std::setw(10) << contact.nickname;
    }
}

void    Contact::display_complete(Contact contact)
{
    std::cout << "First name: " << contact.first_name << std::endl;
    std::cout << "Last name: " << contact.last_name << std::endl;
    std::cout << "Nickname: " << contact.nickname << std::endl;
    std::cout << "Phone number: " << contact.phone << std::endl;
    std::cout << "Darkest secret: " << contact.secret << std::endl;
}