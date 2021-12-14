/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 06:52:21 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 14:38:27 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
    : _name("anonymous zombie")
{
}

Zombie::Zombie(std::string name)
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

Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}

void    randomChump(std::string name)
{
    Zombie  zombie(name);
    
    zombie.announce();
}
