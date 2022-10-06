/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpalfi <zpalfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:47:35 by zpalfi            #+#    #+#             */
/*   Updated: 2022/10/06 13:12:35 by zpalfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

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
    
    Contact    add(Contact contact);
    void    print_info(Contact contact);
    string    add_info(string msg);
    int     isnull(Contact contact);
};

class PhoneBook
{
private:
    //Contact contacts[9];
public:
    Contact contacts[9];
    int     check_pb(PhoneBook pb);
    PhoneBook del_one(PhoneBook pb);
    // PhoneBook(/* args */);
    // ~PhoneBook();
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

string  Contact::add_info(string msg)
{
    string dest;
    
    cout << msg;
    while (42)
    {
        getline(cin, dest);
        if (dest.empty())
            cout << "Empty field not valid! Please, try again.\n" << msg;
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
    cout << new_contact.first_name << '\n';
    return (new_contact);
}

void Contact::print_info(Contact contact)
{
    cout << contact.first_name << '\n';
}

int     Contact::isnull(Contact contact)
{
    if (contact.first_name.empty())
        return (1);
    return (0);
}

int PhoneBook::check_pb(PhoneBook pb)
{
    int i;

    i = 0;
    while (i < 8)
    {
        if (pb.contacts[i].isnull(pb.contacts[i]))
            break ;
        i++;
    }
    return (i);
}

PhoneBook PhoneBook::del_one(PhoneBook pb)
{
    int i;

    i = 0;
    while (i < 7)
    {
        pb.contacts[i] = pb.contacts[i + 1];
        i++;
    }
    return (pb);
}

int main()
{
    string command;
    Contact contact;
    PhoneBook pb;
    int     i;

    i = 0;
    while (42)
    {
        cout << "Enter a command:";
        getline(cin, command);
        if (command == "EXIT")
            break;
        else if (command == "ADD")
        {
            i = pb.check_pb(pb);
            cout << i;
            if (i > 7)
            {
                pb = pb.del_one(pb);
                i = 7;
            }
            pb.contacts[i] = contact.add(contact);
        }
        else if (command == "SEARCH")
            break ;
        else if (command.empty())
            continue ;
        else
            cout << "Not a valid command! Try again\n";
        contact.print_info(pb.contacts[0]);
        contact.print_info(pb.contacts[3]);
        contact.print_info(pb.contacts[7]);
    }
}