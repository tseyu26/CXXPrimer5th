#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    string s {"Hello world!!!!!"};
    cout << s << endl;
    std::size_t punct_cnt { 0 };

    for ( auto c : s){
	cout << c << " ";
        if (ispunct(c)){
	   punct_cnt++;
	}
    }
    
    cout << endl << "The total number of punction ch in the s is: " << punct_cnt << endl;

    return 0;
}
