//
// Created by beloin on 14/06/2022.
//

#include <vector>
#include <string>
#include "../product/Product.h"
#include "search.h"

std::string to_lower(std::string str) {
    std::string a = "";
    for (int i = 0; i < str.length(); ++i) {
        a  += std::tolower(str.at(i));
    }

    return a;
}

std::vector<Product *> Search::search(std::vector<Product *> prodArr, std::string key) {
    std::vector<Product *> searchResults = std::vector<Product *>();
    for (Product *p : prodArr) {
        std::string productLowerName  = to_lower(p->getName());
        std::string keyLowerName  = to_lower(key);
        if (productLowerName.rfind(keyLowerName, 0 ) == 0) {
            searchResults.push_back(p);
        }
    }

    return searchResults;
}