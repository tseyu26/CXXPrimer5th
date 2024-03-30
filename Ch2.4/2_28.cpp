#include <iostream>

int main(){
    int *p1;
    int pi {3};
    const int *const p3 {&pi};
    p1 = p3;
    return 0;
}
