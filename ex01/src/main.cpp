/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpalfi <zpalfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:47:35 by zpalfi            #+#    #+#             */
/*   Updated: 2022/10/06 16:14:53 by zpalfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

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
    void    print_info(Contact contact, int i);
    string    add_info(string msg);
    int     isnull(Contact contact);
    void    display_complete(Contact contact);
};

class PhoneBook
{
private:
    //Contact contacts[9];
public:
    Contact contacts[9];
    int     check_pb(PhoneBook pb);
    PhoneBook del_one(PhoneBook pb);
    void        display(PhoneBook pb);
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
            cout << string(contact.first_name.begin(), contact.first_name.begin() + 9) << '.';
        else
            cout << std::setw(10) << contact.first_name;
    }
    if (i == 2)
    {
        if (contact.last_name.size() > 10)
            cout << string(contact.last_name.begin(), contact.last_name.begin() + 9) << '.';
        else
            cout << std::setw(10) << contact.last_name;
    }
    if (i == 3)
    {
        if (contact.nickname.size() > 10)
            cout << string(contact.nickname.begin(), contact.nickname.begin() + 9) << '.';
        else
            cout << std::setw(10) << contact.nickname;
    }
    if (i == 4)
        cout << contact.phone;
    if (i == 5)
        cout << contact.secret;
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

int isnum(string s, int i)
{
    if (s.size() != 1)
        return (0);
    if (48 <= s.front() && s.front() <= 48 + i)
        return (1);
    return (0);
}

void    Contact::display_complete(Contact contact)
{
    cout << "First name: " << contact.first_name << endl;
    cout << "Last name: " << contact.last_name << endl;
    cout << "Nickname: " << contact.nickname << endl;
    cout << "Phone number: " << contact.phone << endl;
    cout << "Darkest secret: " << contact.secret << endl;
}

void        PhoneBook::display(PhoneBook pb)
{
    int i;
    int max;
    string index;

    i = 0;
    if (pb.contacts[0].isnull(pb.contacts[0]))
    {
        cout << "Your Phonebook is empty!!\n";
        return ;
    }
    cout << "|-------------------------------------------|\n";
    cout << "|     Index|" << "First name|" << " Last name|" << "  Nickname|\n";
    cout << "|-------------------------------------------|\n";
    while (i < 8)
    {
        if (pb.contacts[i].isnull(pb.contacts[i]))
            break ;
        cout << "|" << std::setw(10) << i << "|";
        contacts[i].print_info(contacts[i], 1);
        cout << "|";
        contacts[i].print_info(contacts[i], 2);
        cout << "|";
        contacts[i].print_info(contacts[i], 3);
        cout << "|\n";
        cout << "|-------------------------------------------|\n";
        i++;
    }
    max = i - 1;
    while (42)
    {
        cout << "Please select the index for more info:";
        getline(cin, index);
        if (index.empty())
            continue ;
        if (isnum(index, max))
            i = std::stoi(index);
        else
        {
            cout << "Please enter a valid number >:(\n";
            continue;
        }
        pb.contacts[i].display_complete(pb.contacts[i]);
        break ;
    }
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
            if (i > 7)
            {
                i = -42;
                while (i == -42)
                {
                    cout << "Attention! Maximum number of contacts reached, If you continue the oldest contact will be deleated in order to add the new one. (Y/N):";
                    getline(cin, command);
                    if (command == "Y")
                    {
                        pb = pb.del_one(pb);
                        i = 7;
                    }
                    else if (command == "N")
                        i = -1;
                    else
                        cout << "Not valid entrance!, try again.\n";
                }
            }
            if (i >= 0)
                pb.contacts[i] = contact.add(contact);
        }
        else if (command == "SEARCH")
            pb.display(pb);
        else if (command.empty())
            continue ;
        else
            cout << "Not a valid command! Try again\n";
    }
}