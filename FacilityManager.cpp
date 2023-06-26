//
//  FacilityManager.cpp
//  Projet Financement Structuré
//
//  Created by sarah kerriche on 26/06/2023.
//

#include "FacilityManager.hpp"
#include "FacilityManager.hpp"
#include <iostream>

void FacilityManager::addFacility(Facility* facility) {
    facilities.push_back(facility);
}

void FacilityManager::removeFacility(const std::string& facilityId) {
    for (auto it = facilities.begin(); it != facilities.end(); ++it) {
        if ((*it)->getId() == facilityId) {
            facilities.erase(it);
            break;
        }
    }
}

void FacilityManager::printFacilityDetails() {
    for (const auto& facility : facilities) {
        std::cout << "Facility ID: " << facility->getId() << std::endl;
        // Print other details of facility
    }
}
