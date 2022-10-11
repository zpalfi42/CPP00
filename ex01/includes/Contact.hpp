/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpalfi <zpalfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:09:23 by zpalfi            #+#    #+#             */
/*   Updated: 2022/10/10 12:10:45 by zpalfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone;
    std::string secret;
public:
    Contact();
    ~Contact();
    
    Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string secret);
    
    Contact     add(Contact contact);
    int         isnull(Contact contact);
    void        display_complete(Contact contact);
    void        print_info(Contact contact, int i);
};

#endif