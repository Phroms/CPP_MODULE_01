/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:58:52 by agrimald          #+#    #+#             */
/*   Updated: 2024/06/27 17:58:54 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(const std::string name);
        ~Zombie();
        void    announce(void) const;

};
        Zombie* newZombie(const std::string& name);
        void    randomChump(const std::string& name);
#endif