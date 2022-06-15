//
// Created by beloin on 13/06/2022.
//

#include "CometaSource.h"

#include <utility>
#include "search.h"

std::vector<Product *> CometaSource::searchDatabase(std::string keyword, std::string apiKey) {
    auto prod1 = new Product("Milk", 12, "Rua Jô Soares", 3.7);
    auto prod2 = new Product("Chocolate", 18, "Rua Jô Soares", 2.7);
    auto prod3 = new Product("Gourmet Milk", 2820, "Rua Jô Soares", 4.5);
    auto prod4 = new Product("Alcohol 70%", 20, "Rua Jô Soares", 5.0);

    auto vector = std::vector<Product *>();
    vector.push_back(prod1);
    vector.push_back(prod2);
    vector.push_back(prod3);
    vector.push_back(prod4);

    return Search::search(vector, std::move(keyword));
}
