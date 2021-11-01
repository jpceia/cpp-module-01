/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 06:52:21 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 07:22:56 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name)
    : _name(name)
{
}

Zombie::~Zombie(void)
{
    std::cout << "Destructor: " << _name << std::endl;
}

void Zombie::announce(void)
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    _name = name;
}
