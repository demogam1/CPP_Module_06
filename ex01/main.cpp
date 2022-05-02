/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 03:00:29 by misaev            #+#    #+#             */
/*   Updated: 2022/04/29 01:00:58 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t ret;

    ret = reinterpret_cast<uintptr_t>(ptr);

    return ret;
}


Data* deserialize(uintptr_t raw)
{
    Data *ret;

    ret = reinterpret_cast<Data *>(raw);

    return ret;
}

int main()
{
    Data toto;
    toto.i = 10;
    std::cout << &toto.i << std::endl;
    /*----------------*/ 
    uintptr_t test = serialize(&toto);
    Data *testD = deserialize(test);
    std::cout << &testD->i << std::endl;
    /*----------------*/ 
    std::cout << toto.i << std::endl;
    std::cout << testD->i << std::endl;
    return 1;
}