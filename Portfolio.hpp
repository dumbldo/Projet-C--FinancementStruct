//  Projet Financement Structuré
//
//  Created by sarah kerriche on 23/06/2023.
//


#ifndef PORTFOLIO_HPP
#define PORTFOLIO_HPP

#include <vector>
#include "Part.hpp"

class Portfolio {
private:
    std::vector<Part*> parts; // Liste des parties du portefeuille
    double totalInterest; // Cumul des intérêts dans le portefeuille

public:
    Portfolio();
    
    double calculateTotalAmount() const;
    void addPart(Part* part);
    double calculateTotalInterest() const;

private:
    void addInterest(double amount);
};

#endif // PORTFOLIO_HPP
