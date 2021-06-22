#pragma once

#include <vector>
#include "OrderBookEntry.h"
#include "OrderBook.h"
#include "Wallet.h"


class Bot
{
    public:
        Bot();
        /** Call this to start the bot */
        void botInit();
    private: 
        void getMarketStats();
        void doAsk();
        void doBid();
        void printWallet();
        void trainBot();
        std::string getCurrentTime();
        
        std::string currentTime;
        
        Wallet wallet;

};
