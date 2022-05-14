/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 02:49:56 by misaev            #+#    #+#             */
/*   Updated: 2022/05/14 18:41:42 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

/* Form Canonique */
Conversion::Conversion()
{
}

Conversion::Conversion(const Conversion &p)
{
    this->_i = p._i;
    this->_f = p._f;
    this->_c = p._c;
    this->_d = p._d;
}

Conversion &Conversion::operator=(const Conversion &p)
{
    this->_i = p._i;
    this->_f = p._f;
    this->_c = p._c;
    this->_d = p._d;
    return *this;
}

Conversion::~Conversion()
{
}
/* END */ 


Conversion::Conversion(char *arg)
{
    char *endptr_i;
    char *endptr_d;
    
    long l = strtol(arg, &endptr_i, 10);
    if (*endptr_i && strlen(endptr_i) != 1)
    {
        this->_d = strtod(arg, &endptr_d);
        if (*endptr_d)
        {
            if (!strcmp(endptr_d, "f"))
            {
                this->_i = static_cast<int>(this->_d);
                this->_c = static_cast<char>(this->_i);
                this->_f = static_cast<float>(this->_d);
                if (!strnstr(endptr_i, ".", strlen(endptr_i)))
                {
                    std::cout << "char: impossible" << std::endl;
                    std::cout << "int: impossible" << std::endl;
                }
                else
                {
                    std::cout << "char: ";
                    if (this->_i > 37 && this->_i < 127)
                        std::cout << this->_c << std::endl;
                    else
                        std::cout << "Non displayable" << std::endl;
                    std::cout << "int: " << this->_i << std::endl;
                }
                std::cout << std::setprecision(3) << "float: " << this->_f << "f" << std::endl;
                std::cout << std::setprecision(3) << "double: "<< this->_d << std::endl;
            }
            else
                std::cout << "Wrong_input\n";    
        }
        else
        {
            this->_i = static_cast<int>(this->_d);
            this->_c = static_cast<char>(this->_i);
            this->_f = static_cast<float>(this->_d);
            if (!strcmp(endptr_i, "nan") || !strcmp(endptr_i, "-inf") || !strcmp(endptr_i, "+inf"))
            {
                std::cout << "char: impossible" << std::endl;
                std::cout << "int: impossible" << std::endl;
            }
            else if (l > INT_MAX || l < INT_MIN)
            {
                std::cout << "char: impossible" << std::endl;
                std::cout << "int: impossible" << std::endl;
            }
            else
            {
                std::cout << "char: ";
                if (this->_i > 37 && this->_i < 127)
                    std::cout << this->_c << std::endl;
                else
                    std::cout << "Non displayable" << std::endl;
                std::cout << "int: " << this->_i << std::endl;
            }
            std::cout << std::setprecision(3) << "float: " << this->_f << "f" << std::endl;
            std::cout << std::setprecision(3) << "double: "<< this->_d << std::endl;
        }        
    }
    else
    {
        if (strlen(endptr_i) == 1)
            this->_i = static_cast<int>(endptr_i[0]);
        else
            this->_i = static_cast<int>(l);
        this->_d = static_cast<double>(this->_i);
        this->_c = static_cast<char>(this->_i);
        this->_f = static_cast<float>(this->_d);
        if (l > INT_MAX || l < INT_MIN)
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
        }
        else
        {            
            std::cout << "char: ";
            if (this->_i > 37 && this->_i < 127)
                std::cout << this->_c << std::endl;
            else
                std::cout << "Non displayable" << std::endl;
            std::cout << "int: " << this->_i << std::endl;
        }
        std::cout << std::setprecision(3) << "float: " << this->_f << "f" << std::endl;
        std::cout << std::setprecision(3) << "double: "<< this->_d << std::endl;
    }        
}

