#include <iostream>


int main(){
    int i {42};
    int e {24};
    const int &r {i};

    std::cout << "r: " << r << "\t&r: " << &r << std::endl;
     
    std::cout << "i: " << i << "\t&i: " << &i << std::endl;
    
    std::cout << "let i= 52\n";

    i = 52;

    std::cout << "r: " << r << "\t&r: " << &r << std::endl;
    
    std::cout << "i: " << i << "\t&i: " << &i << std::endl;
    
    r = &e;

    return 0;
    
}
