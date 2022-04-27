/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 03:52:34 by misaev            #+#    #+#             */
/*   Updated: 2022/04/27 04:29:07 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **arg)
{
    if (ac != 2)
    {
        if (ac > 2)
            std::cout << "Too much arguments" << std::endl;
        else
            std::cout << "Less much arguments" << std::endl;
    }
    else
    {
        Conversion toto(arg[1]);
        std::cout << "char: ";
        if (toto.getInt() > 32 && toto.getInt() < 127)
            std::cout << toto.getChar() << std::endl;
        else
            std::cout << "Non Displayable" << std::endl;
        std::cout << "int: " << toto.getInt() << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << toto.getFloat() << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << toto.getFloat() << std::endl;        
    }
    return 1;
}