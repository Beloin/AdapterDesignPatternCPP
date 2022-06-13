//
// Created by beloin on 13/06/2022.
//

#ifndef ADAPTER_PAODEACUCARSOURCEADAPTER_H
#define ADAPTER_PAODEACUCARSOURCEADAPTER_H


#include "SearchAdapter.h"
#include "../Sources/PaodeAcucarSource.h"

class PaodeAcucarSourceAdapter : public SearchAdapter {
private:
    PaodeAcucarSource *paoDeAcucarSource;
public:
    std::vector<Product *> search(std::string keyword) override;
    PaodeAcucarSourceAdapter();
};


#endif //ADAPTER_PAODEACUCARSOURCEADAPTER_H
