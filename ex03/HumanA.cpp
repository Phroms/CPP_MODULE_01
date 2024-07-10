/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:04:35 by agrimald          #+#    #+#             */
/*   Updated: 2024/07/10 19:04:38 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "prueba.hpp"

HumanA::HumanA(const std::string name, const Weapon& weapon)
{
    this-> _humanA = name;
    this-> _weapon = weapon;
};

void HumanA::attack()const
{
    std::cout << _humanA << " \033[32mattack with their\033[0m " << _weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
};