/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:52:38 by ahammad           #+#    #+#             */
/*   Updated: 2023/04/07 08:28:03 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream> 
#include <string>
#include <map>
#include <stdio.h>
#include <string.h>

int check_value(std::string token)
{
    if (token < 0)
        return (0);
    if (token > 1000)
        return (2);
    return (1);
}

int check_day(std::string day)
{
    int nbr_day;
    nbr_day = atoi(day);
    if (nbr_day < 1 || nbr_day > 31)
        return (0);
    return (1);
}

int check_mouth(std::string mouth)
{
    int nbr_mouth;
    nbr_mouth = atoi(mouth)
    if(mouth < 1 || mouth > 12)
        return (0)
    return (1);
}

int check_year(std::string year)
{
    int nbr_year;
    nbr_year = atoi(year);
    if(nbr_year < 2009 || nbr_year > 2023)
        return (0)
    return (1);
}

int check_value_date(std::string token)
{
    int i;
    i = 0;
    if (token.size() != 10)
    {
        return (0);
    }
    while (i < 10)
    {
        if (token[4] != '-' || token[7] !== '-')
            return (0);
        else if (!= isdigit(token[i]))
            return (0);
        i++;
    }
    while (token[i])
    {
        if(check_year(date.substr(0, 4)) == 0)
            return (0);
        if(check_mouth(date.substr(5, 2)) == 0)
            return (0);
        if(check_day(date.substr(8,2)) == 0)
            return (0);
    }
    return (1);
}

int check_value_str(std::string token) //check nbr in str
{
    int i = 0;
    int j = 0;
    while(token[i])
    {
        if (token[i] != '.' && token[i] != ',' && !isdigit(token[i]))
            return (0);
        if (token[i] == '.' || token[i] == ',')
            j++;
        i++;
    }
    if (j > 1)
        return (0);
    return (1);
}

int check_file_txt(std::string file_txt)
{
    std::ifstream input_txt(file_txt);
    std::string line;
    int nbr_line;
    nbr_line = 0;
    while (std::getline(input_txt, line))
    {
        if(nbr_line == 0)
        {
            nbr_line++;
            continue;
        }
        int cmpt_pipe = 0;
        int cmp_letter = 0;
        while (line[cmp_letter])
        {
            if(line[cmp_letter] == '|') //ok juste un
                cmpt_pipe++;
            cmp_letter++;
        }
        if(cmpt_pipe != 1)
        {
            std::cerr <<"Error: bad input (not value)=> " <<std::endl;
            continue;
        }
        char *value_text = new char[line.size() + 1];
        strcpy(value_text, line.c_str());
    
        std::string delimiter = " |";
        size_t pos = 0;
        std::string token;
        if ((pos = line.find(delimiter)) != std::string::npos) 
        {
            token = line.substr(0, pos);
            if (token.size()!=0 )
            {
                std::cout << token << std::endl;
            }
            line.erase(0, pos + delimiter.length());
        }
        if(token.empty())
        {
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
        }
        std::string date = token;
        if ((pos = line.find(delimiter)) != std::string::npos) 
        {
            token = line.substr(0, pos);
            /*if (token.size()!=0 )
            {
                std::cout << token << std::endl;
            }*/
            line.erase(0, pos + delimiter.length());
        }
        if(token.empty())
        {
			std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
		if(!check_value_str(token))
        {
			std::cerr << "Error: not a positive number. => " << line << std::endl;
			continue;
        }
        int a = 0;
        while (token[a])
        {
            if (token[a] == ',')
                token.replace(a, 1, ".");
            a++;
        }
        float value = stof(token);
        std::cout << "TOKEN :"<<token << std::endl;
        if(!check_value_date(date) == 0)
        {
            std::cout << "Error: invalide date." << std::endl;
            detele[] cstr;
            continue;
        }
        if(!check_value(value)==0)
        {
            std::cout << "Error: not a positive number." << std::endl;
            detele[] cstr;
            continue;
        }
		if(check_value(value) == 2)
        {
			std::cout << "Error: too large a number. (a positive integer between 0 and 1000)" << std::endl;
			delete[] cstr;
			continue;
		}
        else //apres avoir verifier les cas d'erreurs tout se passe ici
            double result = this-> 
        delete[] cstr;
        //float nbr = std::stof(token);
        //std::cout << nbr << std::endl;
        
    }
    std::cout << "line input :" << line << std::endl; //ignore premiere ligne
    return (1);
}

int check_file_csv(std::string data_csv)
{
    std::cout << "ici" << std::endl;
    std::ifstream file_csv(data_csv);
    if(file_csv.fail())
    {
        std::cerr << "echec open file data.csv" << std::endl;
        return (0);
    }
    std::string line;
    std::getline(file_csv, line); //ignore la premiere ligne
    while (std::getline(file_csv, line))
    {
        size_t virgule = line.find_first_of(',');
        std::cout << "virgule :" << virgule << std::endl;
        std::string date_key = line.substr(0, virgule);
        std::cout << "date_key : " << date_key << std::endl;
        std::string value_key = line.substr(virgule + 1);
        std::cout << "value_key :" << value_key << std::endl;
        virgule = 0;
    }
    return (1);
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        BitcoinExchange change;
        
        if (!check_file_csv("data.csv"))
        {
            std::cerr << "Error file : data.csv" << std::endl;
        }

        // CsvParser dataCsvParser("data.csv", ","); 
        // CsvParser inputTxtParser("input.txt", "|");

        // std::vector<std::string> dataDates = dataCsvParser.getRow("date");
        // std::vector<std::string> inputDates = inputTxtParser.getRow("date");

        // for (int i = 0; i < dataDates.size(); ++i) {
        //     if (dataDates[i] == inputDates[i])
        //     {
                
        //     }
        // }
        

        std::ifstream input_txt(argv[1]);
        //std::getline (input_txt, line);
        //std::cout << "line : " << line <<std::endl;
        if (input_txt.fail())
        {
            std::cerr << "Error could don't open FILE "<< argv[1] << std::endl;
            return (0);
        }
        else
        {
            //verifier erreur input txt
            check_file_txt(argv[1]);
        }
    }

    else
        std::cerr << "besoin du fichier input.txt" << std::endl;
}