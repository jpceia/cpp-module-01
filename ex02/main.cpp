/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:26:31 by jceia             #+#    #+#             */
/*   Updated: 2021/12/17 12:57:04 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    std::cout << "String: " << s << std::endl;
    std::cout << "Address in memory of the string (using variable): " << &s << std::endl;
    std::cout << "Address in memory of the string (using pointer): " << stringPTR << std::endl;
    std::cout << "Address in memory of the string (using reference): " << &stringREF << std::endl;
    std::cout << "Displaying string using pointer: " << *stringPTR << std::endl;
    std::cout << "Displaying string using reference: " << stringREF << std::endl;
    return 0;
}
