#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<int> vector_1;
    int temp { 0 };
    while (std::cin >> temp){
        vector_1.push_back(temp);
    }
    for (auto integer : vector_1){
        std::cout << integer << " ";
    }
    
    std::cin.clear();
    clearerr(stdin);

    std::vector<std::string> vector_2;
    
    std::string line;

    while (getline(std::cin, line)){
        vector_2.push_back(line);
    }

    for (auto s : vector_2){
        std::cout << s << " ";
    }

    return 0;
}
