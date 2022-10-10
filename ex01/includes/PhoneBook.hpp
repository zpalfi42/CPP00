/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpalfi <zpalfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:12:43 by zpalfi            #+#    #+#             */
/*   Updated: 2022/10/10 12:42:48 by zpalfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[9];
    public:
        PhoneBook();
        ~PhoneBook();
        int         check_pb(PhoneBook pb);
        PhoneBook   del_one(PhoneBook pb);
        void        display(PhoneBook pb);
        PhoneBook        add_i(PhoneBook pb, int i);
};

#endif