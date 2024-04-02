#include <iostream>

int main(){
    int arr[10];

    int *p_arr = arr;
   
    std::cout << "Before assignment: "; 

    for (auto &c : arr){
        std::cout << c << " ";
    }

    std::cout <<  "\nAfter assigment: ";

    for (auto &c : arr){
	*(p_arr++) = 1;
    }

    for (auto &c :arr){
        std::cout << c << " ";
    }
    
    std::cout << std::endl;

    return 0;
}
