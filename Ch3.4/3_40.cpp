#include <iostream>
#include <cstring>

int main(){
    char str1 = " "
	    std::cout << "Enter string1: ";
    std::cin >> *str1;
    std::cout << "Enter string2: ";
    std::cin >> *str2;
    
    str3 = strcat(str3, str1);
    str3 = strcat(str3, str2);

    std::cout << str3 << std::endl;

    return 0;
}

