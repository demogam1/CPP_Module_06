/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 03:26:49 by misaev            #+#    #+#             */
/*   Updated: 2022/04/26 04:29:52 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <iomanip>


int check_isdigit(std::string str)
{
    for(int i = 0; i < (int)str.length(); i++)
    {
        if (isdigit(str[i]) == 0 && str[i] != 'f' && str[i] != '.')
            return 0;
    }
    return 1;
}

int main(int ac, char **argv)
{
    if(ac != 2)
    {
        std::cout << "Not enough or too much argument" << std::endl;
    }
    else
    {
        if (check_isdigit(argv[1]) == 0) // if its not a digit
        {
            std::string arg = argv[1];
            if (strlen(argv[1]) > 1) // if its not a string
            {
                printf("Wrong input ! ");
            }
            else
            {
                float f = float(argv[1][0]);
                int i = int(argv[1][0]);
                char c = i;
                    std::cout << "char: ";
                if (i > 32 && i < 127)
                    std::cout << c << std::endl;
                else
                    std::cout << "Non Displayable" << std::endl;
                std::cout << "int: " << i << std::endl;
                std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
                std::cout << "double: " << std::fixed << std::setprecision(1) << f << std::endl;
            }
        }
        else if (check_isdigit(argv[1]) == 1)
        {
            float f = atof(argv[1]);
            int i = atoi(argv[1]);
            char c = i;
                std::cout << "char: ";
            if (i > 32 && i < 127)
                std::cout << c << std::endl;
            else
                std::cout << "Non Displayable" << std::endl;
            std::cout << "int: " << atoi(argv[1]) << std::endl;
            std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
            std::cout << "double: " << std::fixed << std::setprecision(1) << f << std::endl;
        }
    }
}