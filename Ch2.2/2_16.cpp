#include <iostream>

int main(){
    int i {0}, &r1 {i};
    double d {0.}, &r2 {d};
    std::cout << r2 << " " << &r2 << std::endl;
    return 0;
}
