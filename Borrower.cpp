//
//  Borrower.cpp
//  Projet Financement Structuré
//
//  Created by sarah kerriche on 23/06/2023.
//


#include "Borrower.hpp"

Borrower::Borrower(const std::string& name, Portfolio* portfolio) :
    Entity(name),
    portfolio(portfolio)
{}

Portfolio* Borrower::getPortfolio() { return portfolio; }

void Borrower::setPortfolio(Portfolio* portfolio) { this->portfolio = portfolio; }
