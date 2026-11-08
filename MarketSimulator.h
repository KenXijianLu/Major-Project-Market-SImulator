#ifndef MARKET_SIMULATOR_H
#define MARKET_SIMULATOR_H

#include "Stock.h"
#include "TradingStrategy.h"
#include "Portfolio.h"

// Simulates trading with historical prices and reports the profit or loss. 
// Contains the stock data, trading strategy, and portfolio. 
class MarketSimulator {
    private:
        Stock stock;
        TradingStrategy strategy;
        Portfolio portfolio;
        double startingBalance;
        int daysSimulated;
    public: 
        MarketSimulator(const Stock& stock,
                    const TradingStrategy& strategy,
                    double startingBalance);

        // Applies the strategy to the available daily prices.
        void runSimulation();

        // Returns the final portfolio value minus startingBalance.
        double calculateProfit() const;

        void displayResults() const;
};

#endif 