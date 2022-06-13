//
// Created by beloin on 13/06/2022.
//

#include "SaoLuizSource.h"

std::vector<Product *> SaoLuizSource::search(std::string keyword, int limit, int page) {
    auto prod1 = new Product("Milk", 5, "Bairro lackPill", 1.7);
    auto prod2 = new Product("Chocolate", 6, "Bairro lackPill", 4.7);
    auto prod3 = new Product("Gourmet Milk", 2825, "Bairro lackPill", 1);
    auto prod4 = new Product("Alcohol 70%", 25, "Bairro lackPill", 5.0);

    auto vector = std::vector<Product *>();
    vector.push_back(prod1);
    vector.push_back(prod2);
    vector.push_back(prod3);
    vector.push_back(prod4);

    return vector;
}

