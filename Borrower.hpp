//
//  Borrower.hpp
//  Projet Financement Structuré
//
//  Created by sarah kerriche on 23/06/2023.
//

#ifndef Borrower_hpp
#define Borrower_hpp

#include <stdio.h>


#include "Entity.hpp"
#include "Portfolio.hpp"

class Borrower : public Entity {
private:
    Portfolio* portfolio;  // Le portfolio associé à cet emprunteur

public:
    Borrower(const std::string& name, Portfolio* portfolio = nullptr);

    // Getters
    Portfolio* getPortfolio();

    // Setters
    void setPortfolio(Portfolio* portfolio);
};

#endif /* Borrower_hpp */

