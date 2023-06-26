//  Projet Financement Structuré
//
//  Created by sarah kerriche on 23/06/2023.
//


#ifndef Lender_hpp
#define Lender_hpp

#include "Entity.hpp"
#include <vector>
#include "Facility.hpp"
#include "Portfolio.hpp"

class Lender : public Entity {
private:
    std::vector<Facility*> facilities;  // les facilities associées à ce lender
    Portfolio portfolio;
    
public:
    Lender(const std::string& name);

    Lender(const std::string& name, const std::vector<Facility*>& facilities);

    // Ajoute une facility à ce lender
    void addFacility(Facility* facility);

    // Supprime une facility de ce lender
    void removeFacility(Facility* facility);

    // Getters and setters for facilities
    std::vector<Facility*> getFacilities() const;
    void setFacilities(const std::vector<Facility*>& facilities);
};

#endif /* Lender_hpp */

