#include <iostream>

int main(){
    int i {42};
    int *p { &i };
    int *&r = p;
    std::cout << " r: " << r << std::endl 
	      << " &r: " << &r << std::endl
	      << " *&r: " << *&r << std::endl;

    return 0;
}
