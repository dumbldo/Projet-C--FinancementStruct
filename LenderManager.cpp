//
//  LenderManager.cpp
//  Projet Financement Structuré
//
//  Created by sarah kerriche on 26/06/2023.
//

#include "LenderManager.hpp"
#include <iostream>

void LenderManager::addLender(Lender* lender) {
    lenders.push_back(lender);
}

void LenderManager::removeLender(const std::string& lenderName) {
    for (auto it = lenders.begin(); it != lenders.end(); ++it) {
        if ((*it)->getName() == lenderName) {
            lenders.erase(it);
            break;
        }
    }
}

void LenderManager::printLenderDetails() {
    for (const auto& lender : lenders) {
        std::cout << "Lender Name: " << lender->getName() << std::endl;
        // Print other details of lender
    }
}
