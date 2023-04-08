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
#include <time.h>

void check_value(float value)
{
    if (value < 0)
        throw std::invalid_argument("not a positive number.");
    if (value > 1000)
        throw std::invalid_argument("too large a number.");
        // return (2);
    // return (1);
}
/*
int check_day(std::string day) //inutile
{
    int nbr_day;
    nbr_day = atoi(day);
    if (nbr_day < 1 || nbr_day > 31)
        trow std::invalid_argument("Date malformé");
    return (1);
}
*/
/*
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
}*/
int check_value_date(string::string date) //la nouvelle 
{
    struct tm tm;
    if (strptime(date.c_str(), "%Y-%m-%d", &tm))
		return (true);
    else if("%m" < 2009 )
	{
		std::cout << "Error: bad input invalid mouth=> "<< date << std::endl;
		return (false);  
	}
	else
	{
		std::cout << "Error: invalid date. => "<< date << std::endl;
		return (false);
	}
}
int check_value_date(std::string token) //ancienne version
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

std::string trim(const std::string &str)
{
    if (str.size() == 0)
        return str;

    size_t start = 0;
    size_t end = str.size() - 1;
    while (std::isspace(str[start]))
        ++start;
    while (std::isspace(str[end]))
        --end;
    return str.substr(start, end);
} 

bool check_file_txt(std::string file_txt)
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
        std::string value_text = line;
        std::string delimiteur = "|";
        size_t pos = 0;
        std::string token;
        // line == "2011-01-03 | 1"
        if ((pos = line.find(delimiteur)) != std::string::npos) 
        {
            token = trim(line.substr(0, pos));
            // token == "2011-01-03"
            if (token.size()!=0)
            {
                std::cout << token << std::endl;
            }
            line.erase(0, pos + delimiteur.length());
            // line == " 1"
        }
        if(token.empty()) //  "     | " 
        {
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
        }
		size_t pos = 0;
        std::string date = token;
        try {
            float value std::stof(trim(line));
            if (value < 1000)
            {
                std::cerr << "Error: bad input => " << e.what() << line << std::endl;
                return false;
            }
        }
        catch (std::invalid_argument &e) {
            std::cerr << "Error: bad input => " << e.what() << line << std::endl;
            return false;
        }

		check_value_date(date);
        //float nbr = std::stof(token);
        //std::cout << nbr << std::endl;
        
    }
    std::cout << "line input :" << line << std::endl; //ignore premiere ligne
    return true;
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

		//envoie fichier correcte pour le tester 
    }

    else
        std::cerr << "besoin du fichier input.txt" << std::endl;
}