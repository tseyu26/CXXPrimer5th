#include <iostream>
#include <string>
#include <vector>

using std::string;

int main(){
    string s("some string");
    for (auto it = s.begin();it != s.end() && !isspace(*it); ++it){
	*it = toupper(*it);
    }

    for (auto const &c : s){
        std::cout << c;
    }
    
    return 0;
}

