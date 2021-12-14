/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 07:35:06 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 15:34:22 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon&     _weapon;
public:
    HumanA(const std::string& name, Weapon& weapon);
    ~HumanA(void);

    void attack(void);
};

#endif
