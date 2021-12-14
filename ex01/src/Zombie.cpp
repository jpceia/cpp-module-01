/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 06:52:21 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 14:59:46 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <sstream>

Zombie::Zombie(void)
    : _name("anonymous zombie")
{
}

Zombie::Zombie(const std::string& name)
    : _name(name)
{
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << _name << " died" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string& name)
{
    _name = name;
}

Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *zombies = new Zombie[N];

    for (int i=0; i < N; i++)
    {
        std::stringstream  ss;
        ss << name << "_" << i;
        zombies[i].setName(ss.str());
    }
    return (zombies);
}
