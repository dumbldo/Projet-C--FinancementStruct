#include <iostream>
#include <ctime>
#include <vector>
#include "Facility.hpp"
#include "Payment.hpp"
#include "Part.hpp"
#include "Portfolio.hpp"
#include "Lender.hpp"
#include "Borrower.hpp"
#include "Deal.hpp"

int main() {
    // Création d'une banque agent
    Lender agent("BankA");

    // Création des banques du pool
    Lender lenderB("BankB");
    Lender lenderC("BankC");
    Lender lenderD("BankD");

    // Ajout des banques du pool à la liste du pool
    std::vector<Lender*> pool;
    pool.push_back(&lenderB);
    pool.push_back(&lenderC);
    pool.push_back(&lenderD);

    // Création du portfolio
    Portfolio portfolio;

    // Création de l'emprunteur avec le nom et le portfolio
    Borrower borrower("C1", &portfolio);

    // Création du deal
    std::time_t contractStartDate = std::time(0);
    std::time_t contractEndDate = contractStartDate + (365 * 24 * 60 * 60); // 1 an
    double loanAmount = 10000000.0;
    std::string currency = "USD";
    std::string dealStatus = "ongoing";

    Deal deal("D1", &agent, pool, &borrower, loanAmount, currency, contractStartDate, contractEndDate, dealStatus);

    // Affichage des détails du deal
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

    // Création d'une facility
    std::time_t facilityStartDate = std::time(0);
    std::time_t facilityEndDate = facilityStartDate + (365 * 24 * 60 * 60); // 1 an
    double facilityTrancheAmount = 1000000.0;
    std::string facilityCurrency = "USD";
    std::vector<std::string> facilityLenders = {"BankA", "BankB"};

    Facility facility(facilityStartDate, facilityEndDate, facilityTrancheAmount, facilityCurrency, facilityLenders);

    // Attribution de la facility au deal
    deal.addFacility(&facility);

    // Affichage des détails de la facility
    std::cout << "Facility Details:" << std::endl;
    std::cout << "Start Date: " << facility.getStartDate() << std::endl;
    std::cout << "End Date: " << facility.getEndDate() << std::endl;
    std::cout << "Tranche Amount: " << facility.getTrancheAmount() << std::endl;
    std::cout << "Currency: " << facility.getCurrency() << std::endl;
    std::cout << "Initial Intrest Amout : " << facility.getInterestRate() << std::endl;

    std::cout << "Lenders: ";
    for (const std::string& lender : facility.getLenders()) {
        std::cout << lender << " ";
    }
    std::cout << std::endl;

    // Création d'une part
    double partAmount = 200000.0;
    std::string partId = "PART001";
    std::time_t repaymentDate = std::time(0);

    Part part(partId, partAmount, &facility, repaymentDate);
    
    // Appliquer la part à la facility
    facility.applyPart(&part);

    // Calcul des intérêts de la facility
    double interestAmount = facility.calculateInterest();
    std::cout << "Interest Amount: " << interestAmount << std::endl;
    std::cout << "Next Interest Amount : " << facility.getInterestRate() << std::endl;
    // Affichage du solde restant sur la facility
    std::cout << "Tranche Amount Restant : " << facility.getTrancheAmount() << std::endl;

 

    

    // Ajout de la part au portfolio de l'emprunteur
    portfolio.addPart(&part);
    borrower.setPortfolio(&portfolio);
    
    // Calcul du total des intérêts dans le portfolio de l'emprunteur
    double totalInterest = borrower.getPortfolio()->calculateTotalInterest();
    std::cout << "Total Interest in Borrower's Portfolio: " << totalInterest << std::endl;

    // Calcul du total du montant prêté dans le portfolio de l'emprunteur
    double totalAmount = borrower.getPortfolio()->calculateTotalAmount();
    std::cout << "Total Amount in Borrower's Portfolio: " << totalAmount << std::endl;

    return 0;
}
