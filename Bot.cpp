#include "MerkelMain.h"
#include <iostream>
#include <vector>
#include "CSVReader.h"
#include <map>

#include <typeinfo>

Bot::Bot()
{

}

void Bot::botInit()
{
    movingAverageMap.insert(std::pair<std::string,double>("BTC/USDT",0));
    movingAverageMap.insert(std::pair<std::string,double>("DOGE/BTC",0));
    movingAverageMap.insert(std::pair<std::string,double>("DOGE/USDT",0));
    movingAverageMap.insert(std::pair<std::string,double>("ETH/BTC",0));
    movingAverageMap.insert(std::pair<std::string,double>("ETH/USDT",0));
}


void Bot::trainBot(std::string pair, double buyPrice,double sellPrice){

    double currentTimePeriodAverage = (buyPrice + sellPrice)/2;
    std::cout<<"currentTimePeriodAverage:"<<currentTimePeriodAverage<<std::endl;
    int timePeriod = elaspedPeriod + 1;
    std::cout<<"timePeriod:"<<timePeriod<<std::endl;
    double currentAverage = ( movingAverageMap.find(pair)->second + currentTimePeriodAverage )/timePeriod;
    std::cout<<"currentAverage:"<<currentAverage<<std::endl;
    movingAverageMap.at(pair) = currentAverage; 

}

