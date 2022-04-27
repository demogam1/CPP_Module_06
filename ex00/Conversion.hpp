/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 02:16:01 by misaev            #+#    #+#             */
/*   Updated: 2022/04/27 04:08:48 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <iomanip>

class Conversion
{
    public:
        /* Form Canonique */
        Conversion();
        Conversion(const Conversion &p);
        Conversion &operator=(const Conversion &p);
        ~Conversion();
        /* END */ 
        int check_isdigit(std::string str) const;
        Conversion(char *arg);
        float getFloat() const;
        int getInt() const;
        char getChar() const;
    private:
        float f;
        int i;
        char c;
};