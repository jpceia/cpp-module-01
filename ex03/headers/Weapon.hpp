/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 07:35:09 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 15:34:00 by jpceia           ###   ########.fr       */
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
    Weapon(const std::string& type);
    ~Weapon(void);
    const std::string &getType(void);
    void setType(const std::string& type);
};


#endif
