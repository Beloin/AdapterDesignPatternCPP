//
// Created by beloin on 13/06/2022.
//

#include "PaodeAcucarSource.h"

std::vector<Product *> PaodeAcucarSource::searchDb(std::string keyword, int getMany) {
    auto prod1 = new Product("Milk", 8, "Bairro 13 de Maio", 2.7);
    auto prod2 = new Product("Chocolate", 6, "Bairro 13 de Maio", 3.7);
    auto prod3 = new Product("Gourmet Milk", 2125, "Bairro 13 de Maio", 4);
    auto prod4 = new Product("Alcohol 70%", 22, "Bairro 13 de Maio", 3.5);

    auto vector = std::vector<Product *>();
    vector.push_back(prod1);
    vector.push_back(prod2);
    vector.push_back(prod3);
    vector.push_back(prod4);

    return vector;
}
