//  Projet Financement Structuré
//
//  Created by sarah kerriche on 23/06/2023.
//


#ifndef Facility_hpp
#define Facility_hpp

#include <string>
#include <vector>
#include "Part.hpp"

class Facility {
private:
    std::time_t startDate;
    std::time_t endDate;
    double trancheAmount;
    std::string currency;
    std::vector<std::string> lenders;
    double interestRate;
    double calculatedInterest;
    double outstandingBalance;
    std::vector<Part*> parts;
    

public:
    Facility(std::time_t startDate, std::time_t endDate, double trancheAmount, const std::string& currency, const std::vector<std::string>& lenders);
    void setTrancheAmount(double amount);
    std::time_t getStartDate();
    std::time_t getEndDate();
    double getTrancheAmount();
    std::string getCurrency();
    std::vector<std::string> getLenders();
    double getInterestRate();
    double getOutstandingBalance();
    void setOutstandingBalance(double outstandingBalance);
    double calculateInterest();
    double getRemainingBalance();
    void applyPayment(double amount);
    void applyPart(Part* part);
    std::string getId() const;
    void adjustInterestRate();
};

#endif /* Facility_hpp */
