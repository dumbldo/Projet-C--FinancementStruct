//
//  FacilityManager.hpp
//  Projet Financement Structuré
//
//  Created by sarah kerriche on 26/06/2023.
//


#ifndef FACILITYMANAGER_HPP
#define FACILITYMANAGER_HPP

#include <vector>
#include "Facility.hpp"

class FacilityManager {
public:
    void addFacility(Facility* facility);
    void removeFacility(const std::string& facilityId);
    void printFacilityDetails();

private:
    std::vector<Facility*> facilities;
};

#endif
