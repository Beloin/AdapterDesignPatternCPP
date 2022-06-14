//
// Created by beloin on 13/06/2022.
//

#ifndef ADAPTER_PRODUCTSEARCHER_H
#define ADAPTER_PRODUCTSEARCHER_H


#include <vector>
#include <string>
#include "Product.h"
#include "../Adapters/SearchAdapter.h"
#include "../Adapters/ViaSulSourceAdapter.h"
#include "../Adapters/CometaSourceAdapter.h"
#include "../Adapters/PaodeAcucarSourceAdapter.h"
#include "../Adapters/SaoLuizSourceAdapter.h"

class ProductSearcher {
private:
    SearchAdapter *adapter1 = new ViaSulSourceAdapter();
    SearchAdapter *adapter2 = new CometaSourceAdapter();
    SearchAdapter *adapter3 = new PaodeAcucarSourceAdapter();
    SearchAdapter *adapter4 = new SaoLuizSourceAdapter();
public:
    std::vector<Product *> search(std::string keyword);
};


#endif //ADAPTER_PRODUCTSEARCHER_H
