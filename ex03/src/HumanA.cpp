/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 07:35:11 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 15:28:24 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(const std::string& name, Weapon& weapon)
    : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::attack(void)
{
    std::cout << _name << "attacks with his ";
    std::cout << _weapon.getType() << std::endl; 
}
