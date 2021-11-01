/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:36:33 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 10:02:07 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen(void)
{
}

Karen::~Karen()
{
}

void Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my ";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. ";
    std::cout << "I just love it!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. ";
    std::cout << "You don’t put enough! ";
    std::cout << "If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming here for years and you just started ";
    std::cout << "working here last month." << std::endl;
}

void Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now.";
    std::cout << std::endl;
}

void Karen::complain(std::string level)
{
    std::cout << "[ " << level << " ]" << std::endl; 
    if (level == "DEBUG")
        this->debug();
    else if (level == "INFO")
        this->info();
    else if (level == "WARNING")
        this->warning();
    else if (level == "ERROR")
        this->error();
    else
        std::cout << "Unrecognized level" << std::endl;
    std::cout << std::endl;
}
