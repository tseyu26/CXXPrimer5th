#include <iostream>

int main(){
    int val {50};
    int sum {0};
    while (val <= 100){
        sum += val;
	++val;
    }
    std::cout << sum << std::endl;

    val = 10;
    while (val >=0 ){
        std::cout << val << " ";
	--val;
    }
    std::cout << std::endl;
    
    sum = 0;
    int val1,val2;
    std::cout << "Enter two numbers: ";
    std::cin >> val1 >> val2;
    while (val1 <= val2){
        sum += val1;
	++val1;
    }

    std::cout << "The sum " 
	      << " is " << sum << std::endl;


    return 0;
}
