/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpalfi <zpalfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:04:27 by zpalfi            #+#    #+#             */
/*   Updated: 2022/10/04 11:28:35 by zpalfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    j = 0;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    while (argv[++j])
    {
        i = -1;
        while (argv[j][++i])
            std::cout << (char)toupper(argv[j][i]);
    }
    std::cout << std::endl;
    return 0;
}