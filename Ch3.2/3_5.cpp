#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::string;

int main(){
    string s1, s2;
    cout << "Enter two strings: ";
    cin >> s1 >> s2;
    cout << s1 + s2 << endl;
    cout << s1 + " " + s2 << endl;
    return 0;
}
