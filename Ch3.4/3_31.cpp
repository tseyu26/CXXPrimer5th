#include <iostream>
#include <vector>

int main(){
   
    int arr[10];
    int arr2[10];

    for (std::size_t i{ 0 }; i < 10; ++i){
        arr[i] = i;
	arr2[i] = arr[i];
    }

    std::cout << "arr: ";

    for (auto &c : arr){
        std::cout << c << " ";
    }

    std::cout << std::endl
              << "arr2: ";
 
    for (auto &c : arr2){
        std::cout << c << " ";
    }   


    return 0;
}
