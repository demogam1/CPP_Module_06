/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 02:16:01 by misaev            #+#    #+#             */
/*   Updated: 2022/05/14 17:11:01 by misaev           ###   ########.fr       */
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
        Conversion(char *arg);
    private:
        float _f;
        int _i;
        char _c;
        double _d;
};