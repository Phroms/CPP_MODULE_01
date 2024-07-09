/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:58:56 by agrimald          #+#    #+#             */
/*   Updated: 2024/06/28 20:58:57 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        void    announce(void) const;
        void    setName(const std::string name);
};
    Zombie* zombieHorde(int N, std::string name);
#endif