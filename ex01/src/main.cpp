/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 06:52:14 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 15:02:38 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int N = 5;
    Zombie  *zombies = zombieHorde(N, "zombie");

    for (int i=0; i < N; i++)
        zombies[i].announce();

    delete[] zombies;
    
    return 0;
}
