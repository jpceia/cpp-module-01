/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:07:42 by jceia             #+#    #+#             */
/*   Updated: 2021/10/10 17:22:01 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name)
    : _name(name)
{
}

Pony::~Pony()
{
}

void Pony::speak()
{
    std::cout << "I'm the pony " << _name << std::endl;
}
