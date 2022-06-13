//
// Created by beloin on 13/06/2022.
//

#ifndef ADAPTER_PAODEACUCARSOURCE_H
#define ADAPTER_PAODEACUCARSOURCE_H


#include <string>
#include <vector>
#include "../product/Product.h"

class PaodeAcucarSource {
public:
    std::vector<Product *> searchDb(std::string keyword, int getMany);
};


#endif //ADAPTER_PAODEACUCARSOURCE_H
