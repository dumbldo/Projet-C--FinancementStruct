//  Projet Financement Structuré
//
//  Created by sarah kerriche on 23/06/2023.
//


#ifndef DEAL_HPP
#define DEAL_HPP

#include <string>
#include <vector>
#include <ctime>
#include "Lender.hpp"
#include "Borrower.hpp"

class Deal : public Entity {
    
private:
    
    std::string dealNumber;
    Lender* agent;
    std::vector<Lender*> pool;
    Borrower* borrower;
    double loanAmount;
    std::string currency;
    std::time_t contractStartDate;
    std::time_t contractEndDate;
    std::string dealStatus;
    std::vector<Facility*> facilities;

public:
    // Constructeur de Deal
    Deal(const std::string& dealNumber, Lender* agent, const std::vector<Lender*>& pool, Borrower* borrower,
         double loanAmount, const std::string& currency, std::time_t contractStartDate,
         std::time_t contractEndDate, const std::string& dealStatus)
        : Entity(borrower->getName()), dealNumber(dealNumber), agent(agent), pool(pool), borrower(borrower),
          loanAmount(loanAmount), currency(currency), contractStartDate(contractStartDate),
          contractEndDate(contractEndDate), dealStatus(dealStatus) {}
         
    void addFacility(Facility* facility) {
        facilities.push_back(facility);
    }

    // Getter and Setter for dealNumber
    const std::string& getDealNumber() const { return dealNumber; }
    void setDealNumber(const std::string& dealNumber) { this->dealNumber = dealNumber; }

    // Getter and Setter for agent
    Lender* getAgent() const { return agent; }
    void setAgent(Lender* agent) { this->agent = agent; }

    // Getter and Setter for pool
    const std::vector<Lender*>& getPool() const { return pool; }
    void setPool(const std::vector<Lender*>& pool) { this->pool = pool; }

    // Getter and Setter for borrower
    Borrower* getBorrower() const { return borrower; }
    void setBorrower(Borrower* borrower) { this->borrower = borrower; }

    // Getter and Setter for loanAmount
    double getLoanAmount() const { return loanAmount; }
    void setLoanAmount(double loanAmount) { this->loanAmount = loanAmount; }

    // Getter and Setter for currency
    const std::string& getCurrency() const { return currency; }
    void setCurrency(const std::string& currency) { this->currency = currency; }

    // Getter and Setter for contractStartDate
    std::time_t getContractStartDate() const { return contractStartDate; }
    void setContractStartDate(std::time_t contractStartDate) { this->contractStartDate = contractStartDate; }

    // Getter and Setter for contractEndDate
    std::time_t getContractEndDate() const { return contractEndDate; }
    void setContractEndDate(std::time_t contractEndDate) { this->contractEndDate = contractEndDate; }

    // Getter and Setter for dealStatus
    const std::string& getDealStatus() const { return dealStatus; }
    void setDealStatus(const std::string& dealStatus) { this->dealStatus = dealStatus; }
};


#endif // DEAL_HPP
