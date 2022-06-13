//
// Created by beloin on 13/06/2022.
//

#include "PaodeAcucarSourceAdapter.h"

PaodeAcucarSourceAdapter::PaodeAcucarSourceAdapter() {
    this->paoDeAcucarSource = new PaodeAcucarSource();
}

std::vector<Product *> PaodeAcucarSourceAdapter::search(std::string keyword) {
    return this->paoDeAcucarSource->searchDb(keyword, 10000);
}
