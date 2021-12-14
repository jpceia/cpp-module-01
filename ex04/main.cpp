/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 08:54:07 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 16:26:57 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void    strreplace(std::string &str, const std::string &from, const std::string &to)
{
    std::size_t start_pos = 0;
    std::size_t pos;

    if (from.empty())
        return;
    while (true)
    {
        pos = str.find(from, start_pos);
        if (pos == std::string::npos)   // no match
            break;
        str = str.substr(0, pos) + to + str.substr(pos + from.length());
        start_pos = pos + to.length();  // starting position for next search
    }
}

void    replace(std::ifstream &file_in, std::ofstream &file_out,
                const std::string& s_old, const std::string& s_new)
{
    while (!file_in.eof())
    {
        std::string line;
        std::getline(file_in, line);
        strreplace(line, s_old, s_new);
        file_out << line << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    std::ifstream   file_in;
    std::ofstream   file_out;
    std::string     fname;
    std::string     s_old, s_new;
    
    if (argc != 4)
    {
        std::cout << "Arguments: [filename] [old] [new]" << std::endl;
        return (0);
    }
    
    fname = argv[1];
    file_in.open(fname.c_str());
    if (!file_in) {
        std::cerr << "Error opening file." << std::endl;
        return (1);
    }

    file_out.open((fname + ".replace").c_str());
    if (!file_out) {
        std::cerr << "Error creating file." << std::endl;
        return (2);
    }
    
    s_old = argv[2];
    s_new = argv[3];
    if (s_old.length() == 0 || s_new.length() == 0)
    {
        std::cerr << "Please provide non-empty strings." << std::endl;
        return (3);
    }
    
    replace(file_in, file_out, s_old, s_new);

    file_in.close();
    file_out.close();
    return 0;
}
