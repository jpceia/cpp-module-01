/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:36:35 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 10:00:22 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int getLevelNb(std::string level)
{
    if (level == "DEBUG")
        return 1;
    else if (level == "INFO")
        return 2;
    else if (level == "WARNING")
        return 3;
    else if (level == "ERROR")
        return 4;
    return 0; 
}

int main(int argc, char *argv[])
{
    Karen   karen;
    int     level;

    if (argc != 2)
    {
        std::cout << "Please provide the log level you want to listen.";
        std::cout << std::endl;
        return (0);
    }
    level = getLevelNb(argv[1]);
    switch (level)
    {
    case 1:
        karen.complain("DEBUG");
    case 2:
        karen.complain("INFO");
    case 3:
        karen.complain("WARNING");
    case 4:
        karen.complain("ERROR");
        break ;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]";
        std::cout << std::endl;
        break ;
    }
    return 0;
}
