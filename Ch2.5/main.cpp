#include <iostream>

int main(){
    const int i {42};
    auto j { i };
    std::cout << "type of j is " << typeid(j).name() << std::endl;
    const auto &k { i };
    std::cout << "type of k is " << typeid(k).name() << std::endl;
    auto *p { &i };
    std::cout << "type of p is " << typeid(p).name() << std::endl;
    const auto j2 {i}, &k2 {i};
    std::cout << "type of j2 is " << typeid(j2).name() << std::endl;
    std::cout << "type of k2 is " << typeid(k2).name() << std::endl;

    return 0;
}
