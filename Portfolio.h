#ifndef PORTFOLIO_H
#define PORTFOLIO_H

// Tracks cash, owned shares, and total value for a single-stock partfolio.
class Portfolio {
    private:
        double balance;
        int sharesOwned;

    public:
        // Starts with the given cash balance and zero shares.
        explicit Portfolio(double startingBalance);

        double getBalance() const;
        int getSharesOwned() const;

        // Buys one share if enough cash is available.
        void buyStock(double price);

        // Sells one share if at least one share is owned.
        void sellStock(double price);

        // Returns cash plus the value of all shares at the given price.
        double getTotalValue(double price) const;
};

#endif 