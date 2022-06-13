//
// Created by beloin on 13/06/2022.
//

#ifndef ADAPTER_SAOLUIZSOURCEADAPTER_H
#define ADAPTER_SAOLUIZSOURCEADAPTER_H


#include "SearchAdapter.h"
#include "../Sources/SaoLuizSource.h"
#include "string"
#include "vector"

class SaoLuizSourceAdapter : public SearchAdapter {
private:
    SaoLuizSource *saoLuizSource;

public:
    SaoLuizSourceAdapter();

    std::vector<Product *> search(std::string keyword) override;
};


#endif //ADAPTER_SAOLUIZSOURCEADAPTER_H
