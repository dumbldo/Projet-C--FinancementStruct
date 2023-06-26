//
//  PartManager.cpp
//  Projet Financement Structuré
//
//  Created by sarah kerriche on 26/06/2023.
//

#include <stdio.h>
#ifndef PARTMANAGER_HPP
#define PARTMANAGER_HPP

#include <vector>
#include "Part.hpp"

class PartManager {
public:
    void addPart(Part* part);
    void removePart(const std::string& partId);
    void printPartDetails();

private:
    std::vector<Part*> parts;
};

#endif
