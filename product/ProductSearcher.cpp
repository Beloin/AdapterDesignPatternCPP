//
// Created by beloin on 13/06/2022.
//

#include "ProductSearcher.h"

std::vector<Product *> ProductSearcher::search(std::string keyword) {
    std::vector<Product *> vector = std::vector<Product *>();
    auto v1 = this->adapter1->search(keyword);
    auto v2 = this->adapter2->search(keyword);
    auto v3 = this->adapter3->search(keyword);
    auto v4 = this->adapter4->search(keyword);

    std::copy(v1.begin(), v1.end(), std::back_inserter(vector));
    std::copy(v2.begin(), v2.end(), std::back_inserter(vector));
    std::copy(v3.begin(), v3.end(), std::back_inserter(vector));
    std::copy(v4.begin(), v4.end(), std::back_inserter(vector));

    return vector;
}

