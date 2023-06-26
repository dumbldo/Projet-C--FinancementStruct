//
//  BorrowerManager.hpp
//  Projet Financement Structuré
//
//  Created by sarah kerriche on 26/06/2023.
//

#ifndef BORROWERMANAGER_HPP
#define BORROWERMANAGER_HPP

#include <vector>
#include "Borrower.hpp"

class BorrowerManager {
public:
    void addBorrower(Borrower* borrower);
    void removeBorrower(const std::string& borrowerName);
    void printBorrowerDetails();

private:
    std::vector<Borrower*> borrowers;
};

#endif
