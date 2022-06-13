//
// Created by beloin on 13/06/2022.
//

#include "Product.h"

const std::string &Product::getName() const {
    return name;
}

float Product::getPrice() const {
    return price;
}

const std::string &Product::getLocalization() const {
    return localization;
}

float Product::getQuality() const {
    return quality;
}

Product::Product(const std::string &name, float price, const std::string &localization, float quality) : name(name),
                                                                                                         price(price),
                                                                                                         localization(
                                                                                                                 localization),
                                                                                                         quality(quality) {}
