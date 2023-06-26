//  Projet Financement Structuré
//
//  Created by sarah kerriche on 23/06/2023.
//


#ifndef Part_hpp
#define Part_hpp

#include <string>
#include <ctime>

// Déclaration avancée de la classe Facility
class Facility;

class Part {
private:
    std::string partId;
    double repaymentAmount;
    Facility* associatedFacility;
    std::time_t repaymentDate;

public:
    Part(const std::string& partId, double repaymentAmount, Facility* associatedFacility, std::time_t repaymentDate);

    // Getters
    std::string getPartId() const;
    double getRepaymentAmount() const;
    Facility* getAssociatedFacility() const;
    std::time_t getRepaymentDate() const;

    // Setters
    void setRepaymentAmount(double newRepaymentAmount);
    void setAssociatedFacility(Facility* newAssociatedFacility);
    void setRepaymentDate(std::time_t newRepaymentDate);

    // Méthode pour ajuster le montant de la tranche dans la facility associée
    void adjustFacilityAmount();
    double getInterestAmount() const ;
};

#endif /* Part_hpp */
