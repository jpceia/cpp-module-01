/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 06:52:14 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 07:08:23 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
    Zombie  *zombie1 = newZombie("Joao");
    Zombie  *zombie2 = newZombie("Pedro");

    randomChump("Maria");

    delete zombie1;
    delete zombie2;
    
    return 0;
}
