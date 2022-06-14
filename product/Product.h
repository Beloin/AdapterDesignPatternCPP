//
// Created by beloin on 13/06/2022.
//

#ifndef ADAPTER_PRODUCT_H
#define ADAPTER_PRODUCT_H


#include <string>

class Product {
private:
    std::string name;
    float price;
    std::string localization;
    float quality;

public:
    Product(const std::string &name, float price, const std::string &localization, float quality);

    const std::string &getName() const;
    float getPrice() const;
    const std::string &getLocalization() const;
    float getQuality() const;

    std::string toString();
};


#endif //ADAPTER_PRODUCT_H
