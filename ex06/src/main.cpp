/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:36:35 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 17:22:55 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

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
    level = karen.complain_index(argv[1]);
    switch (level)
    {
    case 0:
        karen.complain("DEBUG");
    case 1:
        karen.complain("INFO");
    case 2:
        karen.complain("WARNING");
    case 3:
        karen.complain("ERROR");
        break ;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]";
        std::cout << std::endl;
        break ;
    }
    return 0;
}
