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
    std::size_t s_cnt{ 0 };
    while ( s_cnt < s.size() ){
        s[s_cnt] = 'X';
	s_cnt++;
    }
    cout << "After: "
         << s << endl;


    return 0;
}

