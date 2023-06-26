//
//  Maintoreplace.cpp
//  Projet Financement Structuré
//
//  Created by sarah kerriche on 26/06/2023.
//



#include <iostream>
#include <ctime>
#include <vector>
#include "Deal.hpp"
#include "DealManager.hpp"
#include "Lender.hpp"
#include "Borrower.hpp"
#include "BorrowerManager.hpp"
#include "FacilityManager.hpp"
#include "LenderManager.hpp"
#include "DealManager.hpp"
#include "PartManager.hpp"


int main() {
    // Création du gestionnaire de prêteurs
    LenderManager lenderManager;

    // Création des prêteurs
    Lender lenderA("LenderA");
    Lender lenderB("LenderB");
    Lender lenderC("LenderC");

    // Ajout des prêteurs au gestionnaire
    lenderManager.addLender(&lenderA);
    lenderManager.addLender(&lenderB);
    lenderManager.addLender(&lenderC);

    // Affichage des détails des prêteurs
    lenderManager.printLenderDetails();

    // Suppression d'un prêteur
    lenderManager.removeLender("LenderB");

    // Affichage des détails des prêteurs mis à jour
    lenderManager.printLenderDetails();

    // Création du gestionnaire d'emprunteurs
    BorrowerManager borrowerManager;

    // Création des emprunteurs
    Borrower borrowerX("BorrowerX");
    Borrower borrowerY("BorrowerY");
    Borrower borrowerZ("BorrowerZ");

    // Ajout des emprunteurs au gestionnaire
    borrowerManager.addBorrower(&borrowerX);
    borrowerManager.addBorrower(&borrowerY);
    borrowerManager.addBorrower(&borrowerZ);

    // Affichage des détails des emprunteurs
    borrowerManager.printBorrowerDetails();

    // Suppression d'un emprunteur
    borrowerManager.removeBorrower("BorrowerY");

    // Affichage des détails des emprunteurs mis à jour
    borrowerManager.printBorrowerDetails();

    // Création du gestionnaire de facilities
    FacilityManager facilityManager;

    // Création des facilities
    std::time_t facilityStartDate1 = std::time(0);
    std::time_t facilityEndDate1 = facilityStartDate1 + (365 * 24 * 60 * 60); // 1 an
    double facilityTrancheAmount1 = 1000000.0;
    std::string facilityCurrency1 = "USD";
    std::vector<std::string> facilityLenders1 = {"BankA", "BankB"};

    Facility facility1(facilityStartDate1, facilityEndDate1, facilityTrancheAmount1, facilityCurrency1, facilityLenders1);

    std::time_t facilityStartDate2 = std::time(0);
    std::time_t facilityEndDate2 = facilityStartDate2 + (365 * 24 * 60 * 60); // 1 an
    double facilityTrancheAmount2 = 2000000.0;
    std::string facilityCurrency2 = "EUR";
    std::vector<std::string> facilityLenders2 = {"BankC", "BankD"};

    Facility facility2(facilityStartDate2, facilityEndDate2, facilityTrancheAmount2, facilityCurrency2, facilityLenders2);

    std::time_t facilityStartDate3 = std::time(0);
    std::time_t facilityEndDate3 = facilityStartDate3 + (365 * 24 * 60 * 60); // 1 an
    double facilityTrancheAmount3 = 3000000.0;
    std::string facilityCurrency3 = "GBP";
    std::vector<std::string> facilityLenders3 = {"BankE", "BankF"};

    Facility facility3(facilityStartDate3, facilityEndDate3, facilityTrancheAmount3, facilityCurrency3, facilityLenders3);


    // Ajout des facilities au gestionnaire
    facilityManager.addFacility(&facility1);
    facilityManager.addFacility(&facility2);
    facilityManager.addFacility(&facility3);

    // Affichage des détails des facilities
    facilityManager.printFacilityDetails();

    // Suppression d'une facility
    facilityManager.removeFacility("Facility2");

    // Affichage des détails des facilities mis à jour
    facilityManager.printFacilityDetails();

    // Création du gestionnaire de parts
    PartManager partManager;

    // Création des parts
    // Création des parts
    std::string partIdA = "PART001";
    double partAmountA = 200000.0;
    std::time_t repaymentDateA = std::time(0);
    Part partA(partIdA, partAmountA, &facility1, repaymentDateA);

    std::string partIdB = "PART002";
    double partAmountB = 300000.0;
    std::time_t repaymentDateB = std::time(0);
    Part partB(partIdB, partAmountB, &facility2, repaymentDateB);

    std::string partIdC = "PART003";
    double partAmountC = 400000.0;
    std::time_t repaymentDateC = std::time(0);
    Part partC(partIdC, partAmountC, &facility3, repaymentDateC);


    // Ajout des parts au gestionnaire
    partManager.addPart(&partA);
    partManager.addPart(&partB);
    partManager.addPart(&partC);

    // Affichage des détails des parts
    partManager.printPartDetails();

    // Suppression d'une part
    partManager.removePart("PartB");

    // Affichage des détails des parts mis à jour
    partManager.printPartDetails();

    return 0;
}
