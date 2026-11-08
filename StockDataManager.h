#ifndef STOCK_DATA_MANAGER_H
#define STOCK_DATA_MANAGER_H

#include <string>
#include "Stock.h"

// Loads historical stock prices from a file and organizes them into a stock.
class StockDataManager {
private:
    std::string filename;

public:
    explicit StockDataManager(const std::string& filename);

    // Loads prices from filename for the requested ticker.
    Stock loadStock(const std::string& ticker) const;
};

#endif 