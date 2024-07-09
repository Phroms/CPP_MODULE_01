/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:33:23 by agrimald          #+#    #+#             */
/*   Updated: 2024/07/09 17:33:27 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;
    
    std::cout << "brain: " << &brain << std::endl;
    std::cout << "ptr: " << stringPTR << std::endl;
    std::cout << "ref: " << &stringREF << std::endl;

    std::cout << "\033[33mChange value\033[0m" << std::endl;

    std::cout << "brain: " << brain << std::endl;
    std::cout << "ptr: " << *stringPTR << std::endl;
    std::cout << "ref: " << stringREF << std::endl;
    return (0);   
}