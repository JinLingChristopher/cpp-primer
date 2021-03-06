//
// Created by king on 2019/5/5.
//

#include <iostream>

#include "Blob.hpp"
#include "BlobPtr.hpp"

using namespace std;


int main() {
    
    Blob<int> ib{1, 2, 3, 4, 5};

    for (auto ptr = ib.begin(); ptr != ib.end(); ++ptr) {
        std::cout << *ptr << " ";
    }
    std::cout << std::endl;

    Blob<string> sb{"world", "halo", "jack", "ninja"};
    for (const auto& item: sb) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    int ia[] = {3, 1, 4, 1, 5, 9, 2, 6};
    Blob<int> vec(begin(ia), end(ia));
    for (const auto& item: vec) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}