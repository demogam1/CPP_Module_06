/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 03:26:49 by misaev            #+#    #+#             */
/*   Updated: 2022/04/23 06:37:04 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int check_isdigit(std::string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]) == 0)
            return 0;
    }
    return 1;
}

int main(int ac, char **argv)
{
    if(ac != 2)
    {
        std::cout << "Only 1 arguments accepted" << std::endl;
    }
    else
    {
        if (check_isdigit(argv[1]) == 1)
        {
            std::cout << "Nice" << std::endl;
        }
    }
}