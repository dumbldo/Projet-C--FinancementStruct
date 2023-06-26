//
//  PartManager.cpp
//  Projet Financement Structuré
//
//  Created by sarah kerriche on 26/06/2023.
//

#include <stdio.h>
#include "PartManager.hpp"
#include "Part.hpp"
#include <iostream>

void PartManager::addPart(Part* part) {
    parts.push_back(part);
}

void PartManager::removePart(const std::string& partId) {
    for (auto it = parts.begin(); it != parts.end(); ++it) {
        if ((*it)->getPartId() == partId) {
            parts.erase(it);
            break;
        }
    }
}

void PartManager::printPartDetails() {
    for (const auto& part : parts) {
        std::cout << "Part ID: " << part->getPartId() << std::endl;
        // Print other details of part
    }
}
