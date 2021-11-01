/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 07:35:19 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 10:23:22 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string type)
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

void Weapon::setType(std::string type)
{
    _type = type;
}
