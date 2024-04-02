#include <iostream>
#include <string>

int main(){
    std::string text("hello world!");   
    
    for (auto it = text.begin();it != text.end(); ++it){
        if(!isspace(*it))    
	    *it = toupper(*it); 
    }
    for (auto const &c : text){
        std::cout << c ;
    }
    return 0;
}
