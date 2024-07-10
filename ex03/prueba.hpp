/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:31:33 by agrimald          #+#    #+#             */
/*   Updated: 2024/07/10 17:32:31 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRUEBA_HPP
 #define PRUEBA_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon();
        Weapon(const std::string type);
        std::string getType()const;
        void setType(const std::string type);
        ~Weapon();
};

class HumanA
{
    private:
        std::string _humanA;
        Weapon _weapon;
    public:
        HumanA(const std::string name, const Weapon& weapon);
        void attack()const;
        ~HumanA();
};

class HumanB
{
    private:
        std::string _humanB;
        Weapon* _weapon;
    public:
        HumanB(const std::string name);
        void    setWeapon(Weapon& weapon);
        void    attack()const;
        ~HumanB();
};


int main();

#endif
