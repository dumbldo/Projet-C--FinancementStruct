//
//  Payment.hpp
//  Projet Financement Structuré
//
//  Created by sarah kerriche on 25/06/2023.
//


#ifndef Payment_hpp
#define Payment_hpp

#include <ctime>

class Payment {
private:
    double amount;
    std::time_t date;

public:
    Payment(double amount, std::time_t date);

    // Getters
    double getAmount() const;
    std::time_t getDate() const;

    // Setters
    void setAmount(double amount);
    void setDate(std::time_t date);
};

#endif /* Payment_hpp */
