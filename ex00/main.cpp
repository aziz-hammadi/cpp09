/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:52:38 by ahammad           #+#    #+#             */
/*   Updated: 2023/04/09 19:20:18 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream> 
#include <string>
#include <map>
#include <stdio.h>
#include <string.h>
#include <time.h>

// void check_value(float value)
// {
//     if (value < 0)
//         throw std::invalid_argument("not a positive number.");
//     if (value > 1000)
//         throw std::invalid_argument("too large a number.");
//         // return (2);
//     // return (1);
// }
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
// bool check_value_date(string::string date) //la nouvelle version check date
// {
//     struct tm tm;
//     if (strptime(date.c_str(), "%Y-%m-%d", &tm))
// 		return (true);
//     else if("%m" < 2009)
// 	{
// 		std::cout << "Error: bad input invalid mouth (%m < 2009)=> "<< date << std::endl;
// 		return (false);  
// 	}
// 	else
// 	{
// 		std::cout << "Error: invalid date. => "<< date << std::endl;
// 		return (false);
// 	}
// }
// /*int check_value_date(std::string token) //ancienne version
// {
//     int i;
//     i = 0;
//     if (token.size() != 10)
//     {
//         return (0);
//     }
//     while (i < 10)
//     {
//         if (token[4] != '-' || token[7] !== '-')
//             return (0);
//         else if (!= isdigit(token[i]))
//             return (0);
//         i++;
//     }
//     while (token[i])
//     {
//         if(check_year(date.substr(0, 4)) == 0)
//             return (0);
//         if(check_mouth(date.substr(5, 2)) == 0)
//             return (0);
//         if(check_day(date.substr(8,2)) == 0)
//             return (0);
//     }
//     return (1);
// }*/
// /*
// int check_value_str(std::string token) //check nbr in str
// {
//     int i = 0;
//     int j = 0;
//     while(token[i])
//     {
//         if (token[i] != '.' && token[i] != ',' && !isdigit(token[i]))
//             return (0);
//         if (token[i] == '.' || token[i] == ',')
//             j++;
//         i++;
//     }
//     if (j > 1)
//         return (0);
//     return (1);
// }
// */
// std::string trim(const std::string &str)
// {
//     if (str.size() == 0)
//         return str;

//     size_t start = 0;
//     size_t end = str.size() - 1;
//     while (std::isspace(str[start]))
//         ++start;
//     while (std::isspace(str[end]))
//         --end;
//     return str.substr(start, end);
// } 

// bool check_file_txt(std::string file_txt)
// {
//     std::ifstream input_txt(file_txt);
//     std::string line;
//     int nbr_line;
//     nbr_line = 0;
//     while (std::getline(input_txt, line))
//     {
//         if(nbr_line == 0)
//         {
//             nbr_line++;
//             continue;
//         }
//         int cmpt_pipe = 0;
//         int cmp_letter = 0;
//         while (line[cmp_letter])
//         {
//             if(line[cmp_letter] == '|') //ok juste un
//                 cmpt_pipe++;
//             cmp_letter++;
//         }
//         if(cmpt_pipe != 1)
//         {
//             std::cerr <<"Error: bad input (bad format)=> " <<std::endl;
//             continue;
//         }
//         std::string delimiteur = "|";
//         size_t pos = 0;
//         std::string token;
//         // line == "2011-01-03 | 1"
//         if ((pos = line.find(delimiteur)) != std::string::npos) 
//         {
//             token = trim(line.substr(0, pos));
//             // token == "2011-01-03"
//             if (token.size()!=0)
//             {
//                 std::cout << token << std::endl; //just test value of date
//             }
//             line.erase(0, pos + delimiteur.length());
//             // line == " 1"
//         }
//         if(token.empty()) //  "     | " 
//         {
// 			std::cerr << "Error: bad input => " << line << std::endl;
// 			continue;
//         }
// 		size_t pos = 0;
//         std::string date = token;
//         try
//         {
//             float value std::stof(trim(line));
//             if (value < 1000)
//             {
//                 std::cerr << "Error: bad input => " << e.what() << line << std::endl;
//                 return false;
//             }
//         }
//         catch (std::invalid_argument &e) {
//             std::cerr << "Error: bad input => " << e.what() << line << std::endl;
//             return false;
//         }
// 		check_value_date(date); //verifie date 
//         //float nbr = std::stof(token);
//         //std::cout << nbr << std::endl;
        
//     }
//     std::cout << "line input :" << line << std::endl; //ignore premiere ligne
//     return true;
// }

std::string trim(const std::string &str)
{
    if (str.size() == 0)
        return str;
    size_t start = 0;
    size_t end = str.size();
    while (std::isspace(str[start]))
        ++start;
    while (std::isspace(str[end - 1]))
        --end;
    return str.substr(start, end);
} 

#include <ctime>

class Date
{
public:
    Date(std::string date)
        : _input(date)
    {
        struct tm tm;
        if (strptime(date.c_str(), "%Y-%m-%d", &tm))
        {
            this->_year = tm.tm_year + 1900;
            this->_month = tm.tm_mon + 1;
            this->_day = tm.tm_mday;
            if (tm.tm_mon < 9)
            {
                std::string str_month = "0" + std::to_string(this->_month);
                tm.tm_mon = std::stoi(str_month);  
            }
            if (tm.tm_mday < 9)
            {
                std::string str_day = "0" + std::to_string(this->_day);
                tm.tm_mday = std::stoi(str_day);  
            }
            this->_is_valid = true;
        }
        else
        {
            this->_is_valid = false;
        }
    }

    bool operator<(const Date &date) const
    {
        if (date._year > this->_year || date._month > this->_month || date._day > this->_day)
            return true;
        return false;
    }

    int year() const { return this->_year; }
    int month() const { return this->_month; }
    int day() const { return this->_day; }
    bool is_valid() const { return this->_is_valid; }
    std::string input() const { return this->_input; }

private:
    std::string _input;
    bool _is_valid;
    int _year;
    int _month;
    int _day;
};

std::map<Date, float> parse_csv(const std::string &data_csv, char delimiter)
{
    std::ifstream file_csv(data_csv);
    if(file_csv.fail())
        throw std::invalid_argument("echec open file : " + data_csv);
    std::string line;
    std::map<Date, float> values;
    std::getline(file_csv, line); //ignore la premiere ligne
    while (std::getline(file_csv, line))
    {
        size_t virgule = line.find_first_of(delimiter);
        Date date = trim(line.substr(0, virgule));
        std::string value_str = trim(line.substr(virgule + 1));
        try {
            float value = std::stof(value_str);
            values.insert({date, value});
        }
        catch (std::invalid_argument) {
            values.insert({date, 0});
        }
    }
    return values;
}

void read_input(const std::string &filename, char delimiter)
{
    std::map<Date, float> dateValues = parse_csv("small.csv", ',');
    std::ifstream file_csv(filename);
    if(file_csv.fail())
        throw std::invalid_argument("echec open file : " + filename);
    std::string line;
    std::map<Date, float> values;
    std::getline(file_csv, line); //ignore la premiere ligne
    while (std::getline(file_csv, line))
    {
        size_t virgule = line.find_first_of(delimiter);
        try {
            Date date = trim(line.substr(0, virgule));
            if (!date.is_valid())
                throw std::invalid_argument("bad input => " + date.input());
            std::string value_str = trim(line.substr(virgule + 1));
            float value = std::stof(value_str);
            if (value < 0)
                throw std::invalid_argument("not a positive number");
            //value > 1000
            values.insert({date, value});
            if (!dateValues[date])
            {
                dateValues.lower_bound(date);
            }
            std::cout << date.input() << " => " << value << " = " << dateValues[date] * value << std::endl;
        }
        catch (const std::invalid_argument &e) {
            std::cout << "Error: " << e.what() << std::endl;
        }
    }
}

#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
   /*std::map<Date, std::string> m; //inutile
    m.insert({Date("2011-04-11"), ""});
    m.insert({Date("2011-04-14"), ""});
    m.insert({Date("2011-04-09"), ""});
    m.insert({Date("2011-04-13"), ""});

    for (auto it = m.begin(); it != m.end(); ++it)
        std::cout << "It: " << it->first.year() << "/" << it->first.month() << "/" << it->first.day() << " - " << it->second << std::endl;
	return (0);
*/

    return 0;
    try
    {
        //read_input("input.txt", '|');
        std::map<Date, float, std::greater<std::string> > dataValues = parse_csv("small.csv", ',');//a remplacer par data.csv
        std::map<Date, float> inputValues = parse_csv("input.txt", '|');
         for (std::map<Date, float>::iterator it = dataValues.begin(); it != dataValues.end(); ++it)
         {
             if (it->first.is_valid())
             {
                 std::cout << it->first.year() << "/" << it->first.month() << "/" << it->first.day() << " => " << it->second << " = " << std::endl;   
             }
             else
             {
                 std::cout << "Error : bad input => " << it->first.input() << std::endl;       
             }
         }
    }
    catch (std::invalid_argument &e)
    {
        std::cerr << "Error: bad: "<< e.what() << std::endl;
    }
    return 0;
    // if (argc == 2)
    // {
    //     BitcoinExchange change;
        
    //     if (!check_file_csv("data.csv"))
    //     {
    //         std::cerr << "Error file : data.csv" << std::endl;
    //     }

    //     std::ifstream input_txt(argv[1]);
    //     //std::getline (input_txt, line);
    //     //std::cout << "line : " << line <<std::endl;
    //     if (input_txt.fail())
    //     {
    //         std::cerr << "Error could don't open FILE "<< argv[1] << std::endl;
    //         return (0);
    //     }
    //     else
    //     {
    //         //verifier erreur input txt
    //         check_file_txt(argv[1]);
    //     }

    //     change.print_value_change(date, value);

	// 	//envoie fichier correcte pour le tester 

    // }

    // else
    //     std::cerr << "besoin du fichier input.txt" << std::endl;
}