#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    string s {"Hello, world!!!"};
    cout << "Before: "
         << s << endl;
    for (auto &c : s){
        c = 'X';
    }
    cout << "After: "
         << s << endl;


    return 0;
}

