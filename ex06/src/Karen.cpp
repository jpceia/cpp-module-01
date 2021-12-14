/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:36:33 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 17:19:57 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen(void)
{
    _complain_level[0] = "DEBUG";
    _complain_level[1] = "INFO";
    _complain_level[2] = "WARNING";
    _complain_level[3] = "ERROR";
    _complain_func[0] = &Karen::debug;
    _complain_func[1] = &Karen::info;
    _complain_func[2] = &Karen::warning;
    _complain_func[3] = &Karen::error;
}

Karen::~Karen()
{
}

void Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my ";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.\n";
    std::cout << "I just love it!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money.\n";
    std::cout << "You don’t put enough! ";
    std::cout << "If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free.\n";
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
    int index = complain_index(level);
    
    std::cout << "[ " << level << " ]" << std::endl;
    if (index < 0 || index >= 4)
    {
        std::cout << "I don't know what to say." << std::endl;
        return ;
    }
    (this->*(_complain_func[index]))();
    std::cout << std::endl;
}

int Karen::complain_index(const std::string& level)
{
    for (std::size_t i = 0; i < 4; i++)
        if (level == _complain_level[i])
            return (i);
    return (-1);
}
