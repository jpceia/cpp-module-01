/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 06:52:14 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 14:32:46 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie1 = newZombie("Joao");
    Zombie  *zombie2 = newZombie("Pedro");

    zombie1->announce();
    zombie2->announce();

    randomChump("Maria");

    delete zombie1;
    delete zombie2;
    
    return 0;
}
