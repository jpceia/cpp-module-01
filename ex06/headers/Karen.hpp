/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:36:38 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 17:17:10 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    std::string _complain_level[4];
    void (Karen::*_complain_func[4])(void);
public:
    Karen(void);
    ~Karen(void);

    void complain(std::string level);
    int  complain_index(const std::string& level);
};

#endif
