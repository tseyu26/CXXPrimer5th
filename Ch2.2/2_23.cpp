#include <iostream>

int main(){
    int *p {nullptr};
    int i {1001};
    int *ptr2 = &i;
    if (ptr2) // if (p)
        std::cout << "point to something " << std::endl;
    else
	std::cout << "point to nothing " << std::endl;

    return 0;
}
