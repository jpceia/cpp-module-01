/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 08:54:07 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 09:31:45 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void    winner_sed(std::ifstream &file_in, std::ofstream &file_out,
                   std::string oldStr, std::string newStr)
{
    int             index;
    char            c;

    index = 0;
    while (1)
    {
        file_in.read(&c, 1);
        if (file_in.eof())
            break ;
        if (c == oldStr[index])
        {
            index++;
            if (index == (int)oldStr.length())
            {
                file_out.write(newStr.c_str(), newStr.length());
                index = 0;
            }
        }
        else
        {
            if (index > 0)
                file_out.write(oldStr.c_str(), index);
            index = 0;
            file_out.write(&c, 1);
        }
    }
    if (index > 0)
        file_out.write(oldStr.c_str(), index);
}

int main(int argc, char const *argv[])
{
    std::ifstream   file_in;
    std::ofstream   file_out;
    std::string     fname;
    std::string     sOld, sNew;

    
    if (argc != 4)
    {
        std::cout << "Arguments: [filename] [old] [new]" << std::endl;
        return (-1);
    }
    
    fname = argv[1];
    file_in.open(fname);
    if (!file_in) {
        std::cerr << "Error opering file." << std::endl;
        return (-1);
    }

    file_out.open(fname + ".replace");
    if (!file_out) {
        std::cerr << "Error creating file." << std::endl;
        return (-1);
    }
    
    sOld = argv[2];
    sNew = argv[3];
    if (sOld.length() == 0 || sNew.length() == 0)
    {
        std::cerr << "Please provide non-empty strings." << std::endl;
        return (-1);
    }
    
    winner_sed(file_in, file_out, sOld, sNew);

    file_in.close();
    file_out.close();
    return 0;
}
