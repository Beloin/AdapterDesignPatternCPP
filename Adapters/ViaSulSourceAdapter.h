//
// Created by beloin on 13/06/2022.
//

#ifndef ADAPTER_VIASULSOURCEADAPTER_H
#define ADAPTER_VIASULSOURCEADAPTER_H


#include "SearchAdapter.h"
#include "../product/Product.h"
#include "../Sources/ViaSulSource.h"

class ViaSulSourceAdapter : public SearchAdapter {
private:
public:
    ViaSulSourceAdapter();

private:
    ViaSulSource* viaSulSource;
public:
    std::vector<Product *> search(std::string keyword) override;
};


#endif //ADAPTER_VIASULSOURCEADAPTER_H
