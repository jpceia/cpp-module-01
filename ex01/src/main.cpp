/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 06:52:14 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 07:23:36 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
    int     nb_zombies = 10;
    Zombie  *zombies = zombieHorde(nb_zombies, "zombie");

    for (int i=0; i < nb_zombies; i++)
        zombies[i].announce();

    delete[] zombies;
    
    return 0;
}
