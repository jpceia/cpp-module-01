/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 07:35:09 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 10:34:50 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon(void);
    Weapon(std::string type);
    ~Weapon(void);
    const   std::string &getType(void);
    void    setType(std::string _type);
};


#endif
