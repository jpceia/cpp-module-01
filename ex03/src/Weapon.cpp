/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 07:35:19 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 15:28:57 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(const std::string& type)
    : _type(type)
{
}

Weapon::~Weapon(void)
{
}

const std::string &Weapon::getType(void)
{
    return (_type);
}

void Weapon::setType(const std::string& type)
{
    _type = type;
}
