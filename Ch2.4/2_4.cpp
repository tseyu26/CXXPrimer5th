#include <iostream>

int main(){
    const double pi {3.1415926};
    const double e {2.718};
    const double *const pip {&pi};
    std::cout << pi << std::endl;
    std::cout << "pip: " << pip << " *pip: " << *pip << std::endl;
    // pip = &e;
    // *pip = e;	
    // Both og them cannot work.    

    return 0;
}
