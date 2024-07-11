/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:30:58 by agrimald          #+#    #+#             */
/*   Updated: 2024/07/10 19:30:59 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "prueba.hpp"

HumanB::HumanB(const std::string name)
{
    this-> _humanB = name;
    this-> _weapon = NULL;
};

void HumanB::setWeapon(Weapon& weapon)
{  
    //if (_weapon)
          //delete _weapon;
    _weapon = &weapon;
}

void    HumanB::attack()const
{
    if (_weapon)
    {
        std::cout << _humanB << " \033[35mattack with their\033[0m " << _weapon->getType() << std::endl;
    }
}

HumanB::~HumanB()
{
    //delete _weapon;
};