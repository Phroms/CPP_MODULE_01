/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:59:04 by agrimald          #+#    #+#             */
/*   Updated: 2024/06/28 20:59:05 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

void    Zombie::announce(void) const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(const std::string name)
{
    this->_name = name;
}

Zombie* zombieHorde(int N, std::string name)
{ 
    if (N <= 0)
        return (0);
    
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name); 
    }
    return (horde);
}

Zombie::~Zombie()
{
}