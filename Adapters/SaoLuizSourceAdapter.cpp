//
// Created by beloin on 13/06/2022.
//

#include "SaoLuizSourceAdapter.h"

std::vector<Product *> SaoLuizSourceAdapter::search(std::string keyword) {
    return this->saoLuizSource->search(keyword, 0, 100);
}

SaoLuizSourceAdapter::SaoLuizSourceAdapter() {
    this->saoLuizSource = new SaoLuizSource();
}
