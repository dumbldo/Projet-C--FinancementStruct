//  Projet Financement Structuré
//
//  Created by sarah kerriche on 23/06/2023.
//


#include "Portfolio.hpp"
#include "Part.hpp"


Portfolio::Portfolio() : totalInterest(0.0) {}

void Portfolio::addPart(Part* part) {
    parts.push_back(part);
}

double Portfolio::calculateTotalInterest() const {
    double totalInterest = 0.0;
    for (const Part* part : parts) {
        totalInterest += part->getInterestAmount();
    }
    return totalInterest;
}

void Portfolio::addInterest(double amount) {
    totalInterest += amount;
}

double Portfolio::calculateTotalAmount() const {
    double totalAmount = 0.0;
    for (const Part* part : parts) {
        totalAmount += part->getRepaymentAmount();
    }
    return totalAmount;
}



