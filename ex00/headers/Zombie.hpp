/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 06:52:04 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 14:51:55 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
    std::string _name;

public:
    Zombie(void);
    Zombie(const std::string& name);
    ~Zombie(void);

    void    announce(void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
