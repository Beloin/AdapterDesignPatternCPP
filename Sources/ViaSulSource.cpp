//
// Created by beloin on 13/06/2022.
//

#include "ViaSulSource.h"

std::vector<Product *> ViaSulSource::queryProducts(std::string keyword) {
    auto prod1 = new Product("Milk", 16, "Rua Jonicast Ferrari", 2.7);
    auto prod2 = new Product("Chocolate", 18, "Rua Jonicast Ferrari", 3.7);
    auto prod3 = new Product("Gourmet Milk", 2820, "Rua Jonicast Ferrari", 5);
    auto prod4 = new Product("Alcohol 70%", 20, "Rua Jonicast Ferrari", 2.0);

    auto vector = std::vector<Product *>();
    vector.push_back(prod1);
    vector.push_back(prod2);
    vector.push_back(prod3);
    vector.push_back(prod4);

    return vector;
}
