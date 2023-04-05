/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:52:38 by ahammad           #+#    #+#             */
/*   Updated: 2023/04/05 15:42:17 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int check_file_csv(std::string data_csv)
{
    std::string::size_type i;
    size_t i;
    i = 0;
    std::string data_csv = "data.csv";
    std::ifstream file_csv(data_csv.c_str());
    if(file_csv.fail())
    {
        std::cerr << "echec open file data.csv" << std::endl;
        return (0);
    }
    else
    {
        std::string line;
        std::getline(file_csv, line); //ignore la premiere ligne
        while (getline(file_csv, line))
        {
            while (line[i] !=',')
                i++;
            i = 0;
        }
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        BitcoinExchange change;
        
        if (check_file_csv("data.csv"))
        {
            std::cerr << "Error file : data.csv" << std::endl;
        }
        std::string data_csv = "data.csv";
        std::ifstream file_csv(data_csv.c_str());
        std::string line;
        std::getline(file_csv, line);
        std::cout << "titre : "<< line << std::endl;
        std::getline(file_csv, line, ',');
        std::cout << "date :" << line << std::endl;
        std::getline(file_csv, line);
        std::cout << "prix :" << line << std::endl;

        std::ifstream input_txt(argv[1]);
        if (input_txt.fail())
            std::cerr << "Error could don't open FILE "<< argv[1] << std::endl; 
    }

    else
        std::cerr << "besoin du fichier input.txt" << std::endl;
}