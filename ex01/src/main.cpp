/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpalfi <zpalfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:47:35 by zpalfi            #+#    #+#             */
/*   Updated: 2022/10/10 12:46:22 by zpalfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    std::string command;
    PhoneBook pb;
    int     i;

    i = 0;
    while (42)
    {
        std::cout << "Enter a command:";
        std::getline(std::cin, command);
        command.erase(0, command.find_first_not_of(" \t\v\f\r"));
        while (isspace(command[command.length() - 1]))
            command.erase(command.find_last_not_of(" \t\v\r\f") + 1, command[command.length() - 1]);
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
                    std::cout << "Attention! Maximum number of contacts reached, If you continue the oldest contact will be deleated in order to add the new one. (Y/N):";
                    std::getline(std::cin, command);
                    command.erase(0, command.find_first_not_of(" \t\v\f\r"));
                    while (isspace(command[command.length() - 1]))
                        command.erase(command.find_last_not_of(" \t\v\r\f") + 1, command[command.length() - 1]);
                    if (command == "Y")
                    {
                        pb = pb.del_one(pb);
                        i = 7;
                    }
                    else if (command == "N")
                        i = -1;
                    else
                        std::cout << "Not valid entrance!, try again.\n";
                }
            }
            if (i >= 0)
                pb = pb.add_i(pb, i);
        }
        else if (command == "SEARCH")
            pb.display(pb);
        else if (command.empty())
            continue ;
        else
            std::cout << "Not a valid command! Try again" << std::endl;
    }
}