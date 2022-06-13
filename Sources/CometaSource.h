//
// Created by beloin on 13/06/2022.
//

#ifndef ADAPTER_COMETASOURCE_H
#define ADAPTER_COMETASOURCE_H


#include <string>
#include <vector>
#include "../product/Product.h"

class CometaSource {
public:
    std::vector<Product *> searchDatabase(std::string keyword, std::string apiKey);
};


#endif //ADAPTER_COMETASOURCE_H
