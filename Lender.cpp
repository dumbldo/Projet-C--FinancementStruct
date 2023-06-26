//
//  Lender.cpp
//  Projet Financement Structuré
//
//  Created by sarah kerriche on 23/06/2023.
//

#include "Facility.hpp"
#include "Lender.hpp"
#include <algorithm>

Lender::Lender(const std::string& name) : Entity(name) {}

Lender::Lender(const std::string& name, const std::vector<Facility*>& facilities)
    : Entity(name), facilities(facilities)
{}

std::vector<Facility*> Lender::getFacilities() const {
    return facilities;
}

void Lender::setFacilities(const std::vector<Facility*>& facilities) {
    this->facilities = facilities;
}

void Lender::addFacility(Facility* facility) {
    facilities.push_back(facility);
}

void Lender::removeFacility(Facility* facility) {
    facilities.erase(std::remove(facilities.begin(), facilities.end(), facility), facilities.end());
}

