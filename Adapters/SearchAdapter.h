//
// Created by beloin on 13/06/2022.
//

#ifndef ADAPTER_SEARCHADAPTER_H
#define ADAPTER_SEARCHADAPTER_H

#include "string"
#include "vector"
#include "../product/Product.h"

class SearchAdapter {
public:
    SearchAdapter() = default;
    virtual std::vector<Product*> search(std::string keyword) = 0;
};


#endif //ADAPTER_SEARCHADAPTER_H
