/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:58:47 by agrimald          #+#    #+#             */
/*   Updated: 2024/06/28 21:35:21 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    std::string name = "Zombieeeee";
    Zombie* horde = zombieHorde(N, name);

    if (horde == 0)
    {
        std::cout << "Failed to assign a name to the zombie .." << std::endl;
        return (1);
    }
    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}
