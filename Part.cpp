//  Projet Financement Structuré
//
//  Created by sarah kerriche on 23/06/2023.
//

#include "Part.hpp"
#include "Facility.hpp"

Part::Part(const std::string& partId, double repaymentAmount, Facility* associatedFacility, std::time_t repaymentDate) :
    partId(partId),
    repaymentAmount(repaymentAmount),
    associatedFacility(associatedFacility),
    repaymentDate(repaymentDate)
{}

std::string Part::getPartId() const {
    return partId;
}

double Part::getRepaymentAmount() const {
    return repaymentAmount;
}

Facility* Part::getAssociatedFacility() const {
    return associatedFacility;
}

std::time_t Part::getRepaymentDate() const {
    return repaymentDate;
}

void Part::setRepaymentAmount(double newRepaymentAmount) {
    repaymentAmount = newRepaymentAmount;
    if (associatedFacility != nullptr) {
        associatedFacility->adjustInterestRate(); // Appel de la méthode adjustInterestRate() de la facility associée
    }
}

void Part::setAssociatedFacility(Facility* newAssociatedFacility) {
    associatedFacility = newAssociatedFacility;
}

void Part::setRepaymentDate(std::time_t newRepaymentDate) {
    repaymentDate = newRepaymentDate;
}

void Part::adjustFacilityAmount() {
    double newAmount = associatedFacility->getTrancheAmount() - repaymentAmount;
    associatedFacility->setTrancheAmount(newAmount);
    associatedFacility->adjustInterestRate();
}

double Part::getInterestAmount() const {
    // Calculer les intérêts pour cette partie en utilisant le taux d'intérêt et la période appropriés
    double interestAmount = associatedFacility->calculateInterest();
    return interestAmount;
}

