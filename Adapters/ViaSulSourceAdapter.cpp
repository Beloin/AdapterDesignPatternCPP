//
// Created by beloin on 13/06/2022.
//

#include "ViaSulSourceAdapter.h"

std::vector<Product *> ViaSulSourceAdapter::search(std::string keyword) {
    return this->viaSulSource->queryProducts(keyword);
}

ViaSulSourceAdapter::ViaSulSourceAdapter() {
    this->viaSulSource = new ViaSulSource();
}
