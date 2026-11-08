#ifndef STOCK_H
#define STOCK_H

#include <string>
#include <vector>

// Stores the stock ticker and price history for a stock. 
class Stock {
    private:
        std::string ticker;
        std::vector<double> priceHistory;
    public:
        Stock(const std::string& ticker, const std::vector<double>& prices);

        const std::string& getTicker() const;
        int getDayCount() const;

    
        double getPrice(int day) const;
        double getAveragePrice() const;
};

#endif  