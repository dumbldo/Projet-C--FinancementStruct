//  Projet Financement Structuré
//
//  Created by sarah kerriche on 23/06/2023.
//



#include "Entity.hpp"

Entity::Entity(const std::string& name) : name(name) {}

std::string Entity::getName() const {
    return name;
}

void Entity::setName(const std::string& newName) {
    name = newName;
}
