/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 02:05:10 by misaev            #+#    #+#             */
/*   Updated: 2022/05/02 11:05:45 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    srand(time(0));
    int nbr_rand = rand() % 3 + 1;
    Base *t;
    switch (nbr_rand)
    {
        case 1:
            t = new A();
            return t;
        case 2:
            t = new B();
            return t;
        default:
            t = new C();
            return t;
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p) != NULL)
    {
        std::cout << "Le veritable type est A" << std::endl;
    }
    else if (dynamic_cast<B*>(p) != NULL)
    {
        std::cout << "Le veritable type est B" << std::endl;
    }
    else
    {
        std::cout << "Le veritable type est C" << std::endl;   
    }
}

void identify(Base& p)
{
    try
    {
        p = dynamic_cast<A &>(p);
        std::cerr << "Le veritable type est A" << std::endl;
    }
    catch(std::bad_cast)
    {
        std::cerr << "Ce n'est pas un type A!" << std::endl;
    }
    try
    {
        p =  dynamic_cast<B &>(p);
        std::cerr << "Le veritable type est B" << std::endl;
    }
    catch(std::bad_cast)
    {
        std::cerr << "Ce n'est pas un type B!" << std::endl;
    }
    try
    {
        p =  dynamic_cast<C &>(p);
        std::cerr << "Le veritable type est C" << std::endl;
    }
    catch(std::bad_cast)
    {
        std::cerr << "Ce n'est pas un type C!" << std::endl;
    }
}

int main()
{
    Base *t = generate();
    identify(t);
    std::cout << "------------------\n"; 
    C a;
    Base &c = dynamic_cast<C &>(a);
    identify(c);
    std::cout << "------------------\n"; 
    delete t;
    return 1;
}