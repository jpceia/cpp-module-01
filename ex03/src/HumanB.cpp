/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 07:35:14 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 15:28:32 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name)
    : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void HumanB::attack(void)
{
    std::cout << _name << "attacks with his ";
    std::cout << _weapon->getType() << std::endl; 
}
