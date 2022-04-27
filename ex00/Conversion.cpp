/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 02:49:56 by misaev            #+#    #+#             */
/*   Updated: 2022/04/27 04:31:07 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

/* Form Canonique */
Conversion::Conversion()
{
    this->i = 0;
    this->f = float(i);
    this->c = i;
    std::cout << "Default Constructor Called" << std::endl;
}

Conversion::Conversion(const Conversion &p)
{
    this->i = p.i;
    this->f = p.f;
    this->c = p.c;
}

Conversion &Conversion::operator=(const Conversion &p)
{
    this->i = p.i;
    this->f = p.f;
    this->c = p.c;
    return *this;
}

Conversion::~Conversion()
{
    std::cout << "Destructor Called" << std::endl;
}
/* END */ 

int Conversion::check_isdigit(std::string str) const
{
    for(int i = 0; i < (int)str.length(); i++)
    {
        if (isdigit(str[i]) == 0 && str[i] != 'f' && str[i] != '.')
            return 0;
    }
    return 1;
}

Conversion::Conversion(char *arg)
{
    if (check_isdigit(arg) == 0) // if its not a digit
    {
        if (strlen(arg) > 1) // if its not a string
            std::cout << "Wrong input ! " << std::endl;
        else
        {
            this->f = float(arg[0]);
            this->i = int(arg[0]);
            this->c = this->i;
        }
    }
    else if (check_isdigit(arg) == 1)
    {
        this->f = atof(arg);
        this->i = atoi(arg);
        this->c = this->i;
    }
}

float Conversion::getFloat() const
{
    return this->f;
}

int Conversion::getInt() const
{
    return this->i;
}

char Conversion::getChar() const
{
    return this->c;
}