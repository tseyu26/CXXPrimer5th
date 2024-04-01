#include <iostream>
#include <string>
#include <vector>

int main(){
    std::string temp;
    std::vector<std::string> vector_s;
    while (std::cin >> temp){
        vector_s.push_back(temp);
    }

    for (auto &v : vector_s){
        for (auto &c : v){
            c = toupper(c);	    
	}
    }

    for (auto &v : vector_s){
        std::cout << v << std::endl;
    }

    return 0;
}

