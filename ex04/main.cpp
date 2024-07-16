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

int replace_value(std::string &line, const std::string &s1, const std::string &s2)
{
    int change = 0;
    size_t pos = 0;

    if (s1.empty())
        return (change);
    
    while (true)
    {
        pos = line.find(s1, pos);
        if (pos >= line.size())
            break;
        line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
        pos += s2.length();
        change++;
    }
    //std::cout << "Hubo" << change << "change(s). " << std::endl;
    return (change);
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
    std::string line;
    int total_change = 0;
    while (getline(inputfile, line))
    {
        total_change += replace_value(line, argv[2], argv[3]);
        std::cout << line << std::endl;
    }
    std::cout << "Total de cambios realizados" << total_change << std::endl;
    return (0);
}