/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:07:55 by agrimald          #+#    #+#             */
/*   Updated: 2024/06/27 18:07:57 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete (heapZombie);
    randomChump("StackZombie");
    return (0);
}