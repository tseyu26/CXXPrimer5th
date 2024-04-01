#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    string word;
    while (cin >> word){
        cout << word << endl;
    }
    cin.clear();
    clearerr(stdin);
    string line;
    while (getline(cin, line)){
        cout << line << endl;
    }
    cin.clear();
    clearerr(stdin);
 
    string s1; 
    cin >> s1;
    string s2 (s1);
    string s3 = s2;
    string s4 ("value");
    string s5 = "value";
    string s6(6, 'x');
    
    cout << "s1: " << s1 << endl; 

    cout << "s2: " << s2 << endl; 

    cout << "s3: " << s3 << endl; 

    cout << "s4: " << s4 << endl; 

    cout << "s5: " << s5 << endl; 

    cout << "s6: " << s6 << endl; 

    cout << "s1 + s2 = " <<  s1 + s2 << endl;

    return 0;
}
