#include <iostream>
#include <vector>

int main(){
   
    std::vector<int> vec_1(10), vec_2(10);
    int temp { 0 };

    for (auto it = vec_1.begin(); it != vec_1.end(); ++it){
        *it = temp++;
    }

    for (auto it1 = vec_1.begin(), it2 = vec_2.begin(); it1 != vec_1.end(); ++it1){
        *it2 = *it1;
	++it2;
    }

    std::cout << "vec_1: ";

    for (auto &c : vec_1){
        std::cout << c << " ";
    }

    std::cout << std::endl
              << "vec_2: ";
 
    for (auto &c : vec_2){
        std::cout << c << " ";
    }   


    return 0;
}
