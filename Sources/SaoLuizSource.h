//
// Created by beloin on 13/06/2022.
//

#ifndef ADAPTER_SAOLUIZSOURCE_H
#define ADAPTER_SAOLUIZSOURCE_H


#include <vector>
#include <string>
#include "../product/Product.h"

class SaoLuizSource {
public:
    std::vector<Product *> search(std::string keyword, int limit, int page);
};


#endif //ADAPTER_SAOLUIZSOURCE_H
