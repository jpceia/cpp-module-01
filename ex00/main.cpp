/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:07:39 by jceia             #+#    #+#             */
/*   Updated: 2021/10/10 17:22:06 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheStack(std::string name)
{
    Pony pony(name);
    pony.speak();
}

void    ponyOnTheHeap(std::string name)
{
    Pony    *pony;

    pony = new Pony(name);
    pony->speak();
    delete pony;
}

int main(void)
{
    ponyOnTheStack("John");
    ponyOnTheHeap("Maria");
    return 0;
}