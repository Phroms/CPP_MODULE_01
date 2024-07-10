/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:56:14 by agrimald          #+#    #+#             */
/*   Updated: 2024/07/10 17:56:15 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "prueba.hpp"

int main()
{
    {
      Weapon club = Weapon("crude spiked club");

      HumanA bob("Bob", club);
      bob.attack();
      club.setType("some other type of club");
      bob.attack();  
    }
    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return (0);
}