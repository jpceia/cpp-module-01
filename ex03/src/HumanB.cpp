/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 07:35:14 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 10:42:57 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
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
