/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:58:47 by agrimald          #+#    #+#             */
/*   Updated: 2024/06/27 17:58:49 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(const std::string name)
{
    this->_name = name;
}

void    Zombie::announce(void) const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(const std::string& name)
{
    Zombie *newZombie; //aqui con esto creas el objeto
    newZombie = new Zombie(name);
    return newZombie;
}

void    randomChump(const std::string& name)
{
    Zombie z(name);
    z.announce();
}

Zombie::~Zombie()
{
    std::cout << "Is destroyed ..." << std::endl;
}