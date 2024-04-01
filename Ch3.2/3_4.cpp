#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    string s1 {"Hello, cxx"};
    string s2 {"Hello, c++"};
    if (s1==s2){
        cout << "Yes, they are the same string!\n";
    }else if(s1 > s2){
        cout << "s1: " << s1 << " is greater than s2: " << s2 << endl ;
    }else {
        cout << "s2: " << s2 << " is greater than s1: " << s1 << endl;
    }

    if (s1.size() > s2.size()){
        cout << "s1's size is greater than s2's size.\n";
    }else if(s2.size() > s1.size()) {
        cout << "s2's size is greater than s1's size.\n";
    }else{
        cout << "They have the same size: " << s1.size() << endl;
    }

    return 0;
}
