/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:10:07 by agrimald          #+#    #+#             */
/*   Updated: 2024/07/10 18:10:08 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "prueba.hpp"

Weapon::Weapon()
{
};

Weapon::Weapon(const std::string type)
{
    this->_type = type;
}

std::string Weapon::getType()const
{   
    return (_type);
}

void    Weapon::setType(const std::string type)
{
    _type = type;
}

Weapon::~Weapon()
{
};