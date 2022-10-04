/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpalfi <zpalfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:47:35 by zpalfi            #+#    #+#             */
/*   Updated: 2022/10/04 15:28:26 by zpalfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

class PhoneBook
{
private:
    /* data */
public:
    // PhoneBook(/* args */);
    // ~PhoneBook();
};

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone;
    std::string secret;
public:
    Contact(/* args */);
    ~Contact();
    
    void    add(void);
};

Contact::Contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone = "";
	this->secret = "";
}

Contact::~Contact()
{}

void    Contact::add(void)
{
    Contact new_contact;
    
    while (42)
    {
        std::cout << "First name:";
        std::cin >> new_contact.first_name;
        if (new_contact.first_name.empty())
        {
            std::cout << "Field cannot be empty! Try again\n";
            break ;
        }
        else
            break ;
    }
}

int main()
{
    std::string command;
    Contact contact;
    // PhoneBook pb;
    while (42)
    {
        std::cout << "Enter a command:";
        std::cin >> command;
        if (command == "EXIT")
            break;
        else if (command == "ADD")
            contact.add();
        else if (command == "SEARCH")
            break ;
        else if (command == "\0")
            break ;
        else
            std::cout << "Not a valid command! Try again\n";
    }
}