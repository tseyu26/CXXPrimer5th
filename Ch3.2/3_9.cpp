#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    string s {"Hello, world!!!"};
    string s_temp;
    std::size_t s_cnt { 0 };
    cout << "Before: "
         << s << endl;
    for (auto c : s){
        if (!ispunct(c)){
	    s_temp += c;
	}
	s_cnt++;
    }
    s = s_temp;
    cout << "After: "
         << s << endl;


    return 0;
}

