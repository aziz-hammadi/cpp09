/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:52:38 by ahammad           #+#    #+#             */
/*   Updated: 2023/03/31 15:23:48 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BitcoinExchange_hpp
#define BitcoinExchange_hpp
#include <fstream>
#include <iostream>
#include <fstream>

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>

class BitcoinExchange 
{
    private:
        std::map<std::string, float, std::greater<std::string> > data_csv;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange & btc);
        BitcoinExchange & operator= (const BitcoinExchange & btc);
        ~BitcoinExchange ();
        int btc_readFromData_CSV(std::string csv_file);
        void printData_CSV();
        void printData_CSV_fileTXT(std::string date, float value);
};

#endif

#endif