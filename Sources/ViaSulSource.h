//
// Created by beloin on 13/06/2022.
//

#ifndef ADAPTER_VIASULSOURCE_H
#define ADAPTER_VIASULSOURCE_H


#include <vector>
#include "string"
#include "../product/Product.h"

class ViaSulSource {
public:
    std::vector<Product *> queryProducts(std::string keyword);
};


#endif //ADAPTER_VIASULSOURCE_H
