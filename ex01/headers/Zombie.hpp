/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 06:52:04 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 07:20:02 by jceia            ###   ########.fr       */
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
    Zombie(std::string name);
    ~Zombie(void);

    void    announce(void);
    void    setName(std::string name);
};

#endif
