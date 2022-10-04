/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpalfi <zpalfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:47:35 by zpalfi            #+#    #+#             */
/*   Updated: 2022/10/04 17:09:43 by zpalfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

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
    string first_name;
    string last_name;
    string nickname;
    string phone;
    string secret;
public:
    Contact(/* args */);
    ~Contact();
    
    void    add(void);
};

Contact::Contact()
{
	// this->first_name = "";
	// this->last_name = "";
	// this->nickname = "";
	// this->phone = "";
	// this->secret = "";
}

Contact::~Contact()
{}

void    Contact::add(void)
{
    Contact new_contact;
    
    while (42)
    {
        cout << "First name:";
        while (4242)
        {
                getline(cin, new_contact.first_name);
            if (new_contact.first_name.empty())
            {
                cout << "Empty field not valid! Please, try again.\n" << "First name:";
            }
            else
                break;
        }
    }
}

int main()
{
    string command;
    Contact contact;
    // PhoneBook pb;
    while (42)
    {
        cout << "Enter a command:";
        cin >> command;
        if (command == "EXIT")
            break;
        else if (command == "ADD")
            contact.add();
        else if (command == "SEARCH")
            break ;
        else if (command == "\0")
            break ;
        else
            cout << "Not a valid command! Try again\n";
    }
}