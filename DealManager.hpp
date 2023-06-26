//
//  DealManager.hpp
//  Projet Financement Structuré
//
//  Created by sarah kerriche on 26/06/2023.
//

#ifndef DealManager_hpp
#define DealManager_hpp

#include <stdio.h>

#include <iostream>
#include <vector>
#include "Deal.hpp"

#include <iostream>
#include <vector>
#include "Deal.hpp"

class DealManager {
private:
    std::vector<Deal> deals;

public:
    void addDeal(const Deal& deal) {
        deals.push_back(deal);
    }

    void removeDeal(const std::string& dealNumber) {
        // Rechercher et supprimer le deal de la liste
        auto it = std::find_if(deals.begin(), deals.end(), [&](const Deal& deal) {
            return deal.getDealNumber() == dealNumber;
        });
        if (it != deals.end()) {
            deals.erase(it);
        }
    }

    void updateDeal(const std::string& dealNumber, const Deal& updatedDeal) {
        // Rechercher le deal dans la liste et le mettre à jour
        for (Deal& existingDeal : deals) {
            if (existingDeal.getDealNumber() == dealNumber) {
                existingDeal = updatedDeal;
                break;
            }
        }
    }

    void printDealDetails() {
        for (const Deal& deal : deals) {
            std::cout << "Deal Details:" << std::endl;
            std::cout << "Deal Number: " << deal.getDealNumber() << std::endl;
            std::cout << "Agent: " << deal.getAgent()->getName() << std::endl;
            std::cout << "Pool: ";
            for (Lender* lender : deal.getPool()) {
                std::cout << lender->getName() << " ";
            }
            std::cout << std::endl;
            std::cout << "Borrower: " << deal.getBorrower()->getName() << std::endl;
            std::cout << "Loan Amount: " << deal.getLoanAmount() << std::endl;
            std::cout << "Currency: " << deal.getCurrency() << std::endl;
            std::cout << "Contract Start Date: " << deal.getContractStartDate() << std::endl;
            std::cout << "Contract End Date: " << deal.getContractEndDate() << std::endl;
            std::cout << "Deal Status: " << deal.getDealStatus() << std::endl;
            std::cout << std::endl;
        }
    }
};


#endif /* DealManager_hpp */
