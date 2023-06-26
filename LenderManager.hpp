//  Projet Financement Structuré
//
//  Created by sarah kerriche on 23/06/2023.
//


#ifndef LENDERMANAGER_HPP
#define LENDERMANAGER_HPP

#include <vector>
#include "Lender.hpp"

class LenderManager {
public:
    void addLender(Lender* lender);
    void removeLender(const std::string& lenderName);
    void printLenderDetails();

private:
    std::vector<Lender*> lenders;
};

#endif
