//
//  BorrowerManager.cpp
//  Projet Financement Structuré
//
//  Created by sarah kerriche on 26/06/2023.
//

#include "BorrowerManager.hpp"

#include <iostream>

void BorrowerManager::addBorrower(Borrower* borrower) {
    borrowers.push_back(borrower);
}

void BorrowerManager::removeBorrower(const std::string& borrowerName) {
    for (auto it = borrowers.begin(); it != borrowers.end(); ++it) {
        if ((*it)->getName() == borrowerName) {
            borrowers.erase(it);
            break;
        }
    }
}

void BorrowerManager::printBorrowerDetails() {
    for (const auto& borrower : borrowers) {
        std::cout << "Borrower Name: " << borrower->getName() << std::endl;
        // Print other details of borrower
    }
}
