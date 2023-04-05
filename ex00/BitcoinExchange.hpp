/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:52:38 by ahammad           #+#    #+#             */
/*   Updated: 2023/04/05 03:26:59 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream> 
#include <string>
#include <map>

class BitcoinExchange
{
    private:
        std::map<std::string, float, std::greater<std::string> > data_csv; //utilisation de map pour match la clef valeur date et prix 
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange & btc);
        ~BitcoinExchange ();
        BitcoinExchange & operator= (const BitcoinExchange & btc);
		int check_file_csv(std::string file_csv);
        void printData_CSV();
        void printData_CSV_fileTXT(std::string date, float value);
};

#endif