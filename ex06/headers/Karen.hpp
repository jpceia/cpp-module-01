/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:36:38 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 09:48:13 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{
private:
    /* data */
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
public:
    Karen(void);
    ~Karen(void);

    void complain(std::string level);
};

#endif
