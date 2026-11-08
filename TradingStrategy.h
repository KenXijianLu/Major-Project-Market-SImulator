#ifndef TRADING_STRATEGY_H
#define TRADING_STRATEGY_H

#include <string>

// Stores a strategy's name and price thresholds for each person's trading decisions.
class TradingStrategy {
    private:
        std::string name;
        double buyThreshold;
        double sellThreshold;
    public:
        // Requires buyThreshold < sellThreshold.
        TradingStrategy(const std::string& name,
                        double buyThreshold,
                        double sellThreshold);

        // Buy when the price is at or below buyThreshold.
        bool shouldBuy(double price) const;

        // Sell when the price is at or above sellThreshold.
        bool shouldSell(double price) const;

};

#endif 