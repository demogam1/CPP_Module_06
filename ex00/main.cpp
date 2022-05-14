/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 03:52:34 by misaev            #+#    #+#             */
/*   Updated: 2022/05/14 18:39:59 by misaev           ###   ########.fr       */
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
            std::cout << "number of arguments incorrect" << std::endl;
    }
    else
        Conversion toto(arg[1]); 
    return 1;
}