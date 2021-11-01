/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 07:35:06 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 10:34:38 by jceia            ###   ########.fr       */
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
    HumanA(std::string name, Weapon& weapon);
    ~HumanA(void);

    void attack(void);
};

#endif
