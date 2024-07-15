/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:01:40 by agrimald          #+#    #+#             */
/*   Updated: 2024/07/11 19:01:41 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "prueba.hpp"

std::string replace_value(std::string line, std::string s1, std::string s2)
{
    std::string result;
}

std::string read_line(std::ifstream &inputfile)
{
    std::string line;
    std::getline(inputfile, line);
    return (line);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Fallo con los archivos" << std::endl;
        return (1);
    }
    std::ifstream inputfile(argv[1]);

    if (!inputfile)
    {
        std::cout << "Error al abrir el archivo" << std::endl;
        return (1);
    }
    std::string line = read_line(inputfile);
    std::cout << line << std::endl;
    return (0);
}