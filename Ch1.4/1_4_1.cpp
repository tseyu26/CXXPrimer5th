#include <iostream>

int main(){
    int val {50}, sum {0};
    for (; val <= 100 ; ++val){
        sum += val;
    }
    std::cout << sum << std::endl;
    
    val = 10;
    for (; val >=0 ; --val){
        std::cout << val << " "; 
    }
    std::cout << std::endl;
    
    sum = 0;
    std::cout << "Enter two numbers: ";
    int val1,val2;
    std::cin >> val1 >> val2;
    if (val1 > val2){
        for (; val2 <= val1; val2++){
           sum += val2;
       }
    }else{
        for (; val1 <= val2; val1++){
	    sum += val1;
	} 
    }
    std::cout << "The sum is " << sum << std::endl;

    return 0;
}
