#include <iostream>


int main(){
    int a {3}, b {4};

    decltype(a) c {a};
    decltype((b)) d {a};
    ++c;
    ++d;

    std::cout << " c: " << c << " type of c is " << typeid(c).name() << std::endl;
    std::cout << " d: " << d << " type of d is " << typeid(d).name() << std::endl;
    std::cout << " a: " << a << " type of a is " << typeid(d).name() << std::endl;

    return 0;
}
