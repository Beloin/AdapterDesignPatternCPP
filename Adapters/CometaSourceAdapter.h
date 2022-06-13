//
// Created by beloin on 13/06/2022.
//

#ifndef ADAPTER_COMETASOURCEADAPTER_H
#define ADAPTER_COMETASOURCEADAPTER_H


#include "SearchAdapter.h"
#include "../product/Product.h"
#include "../Sources/CometaSource.h"

class CometaSourceAdapter : public SearchAdapter {
private:
    CometaSource *cometaSource;
public:
    CometaSourceAdapter();
    std::vector<Product *> search(std::string keyword) override;
};


#endif //ADAPTER_COMETASOURCEADAPTER_H
