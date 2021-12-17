/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:36:35 by jceia             #+#    #+#             */
/*   Updated: 2021/12/17 13:29:54 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
    Karen   karen;

    karen.complain("DEBUG");
    karen.complain("INFO");
    karen.complain("WARNING");
    karen.complain("ERROR");
    return 0;
}
