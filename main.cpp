//
// Created by beloin on 13/06/2022.
//

#include <iostream>
#include "string"
#include "product/ProductSearcher.h"
#include "product/Product.h"

int main () {
    auto searcher = new ProductSearcher();
    std::cout << "Please Write yout Keyword to search" << std::endl;

    std::string key;
    getline(std::cin, key);

    auto searchResults = searcher->search(key);

    for (Product *p: searchResults) {
        std::cout << p->toString();
        std::cout << std::endl;
    }

    return 0;
}