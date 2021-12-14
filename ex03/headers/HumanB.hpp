/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 07:35:04 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 15:34:20 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon*     _weapon;
public:
    HumanB(const std::string& name);
    ~HumanB(void);

    void setWeapon(Weapon &weapon);
    void attack(void);
};



#endif
