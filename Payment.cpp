//
//  Payment.cpp
//  Projet Financement Structuré
//
//  Created by sarah kerriche on 25/06/2023.
//


// Payment.cpp

#include "Payment.hpp"

Payment::Payment(double amount, std::time_t date)
    : amount(amount), date(date) {}

double Payment::getAmount() const {
    return amount;
}

std::time_t Payment::getDate() const {
    return date;
}

void Payment::setAmount(double amount) {
    this->amount = amount;
}

void Payment::setDate(std::time_t date) {
    this->date = date;
}
