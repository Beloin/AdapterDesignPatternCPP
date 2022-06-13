//
// Created by beloin on 13/06/2022.
//

#include "CometaSourceAdapter.h"

std::vector<Product *> CometaSourceAdapter::search(std::string keyword) {
    return this->cometaSource->searchDatabase(keyword, "CHAVE_DE_API");
}

CometaSourceAdapter::CometaSourceAdapter() {
    this->cometaSource = new CometaSource();
}