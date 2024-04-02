#include <iostream>
#include <vector>

int main(){
    std::vector<int> vector_i;
    int temp { 0 };
    while (std::cin >> temp)
        vector_i.push_back(temp);

    for (auto &c : vector_i){
        std::cout << c << " ";
    }

    std::cout << std::endl;

    for (auto it = vector_i.begin(); it != vector_i.end();it++){
        *it = *it *2;
    }

    for (auto &c : vector_i){
        std::cout << c << " ";
    }

    std::cout << std::endl;

    return 0;
}
