#include <iostream>
#include <vector>

int main(){
    std::vector<int> vec_i(10);
    for (auto it = vec_i.begin(); it != vec_i.end();++it)
        std::cin >> *it;

    for (auto it = vec_i.begin(); it != vec_i.end(); ++it)
        std::cout << *it << " ";
    
    std::cout << std::endl;

    for (auto it = vec_i.begin(); it != vec_i.end(); ++it){
        if (it == vec_i.begin()){
	    std::cout << *it + *(it + 1) << " ";
	}else if (it == vec_i.end() -1){
	    std::cout << *it + *(it - 1) << " ";
	}else {
	    std::cout << *it + *(it - 1) + *(it + 1) << " ";
	}
    } 

    std::cout << std::endl;
 
    for (auto it1 = vec_i.begin(), it2 = vec_i.end()-1; it1 != vec_i.end(); ++it1, --it2){
        std::cout << *it1 + *it2 << " ";
    } 

    std::cout << std::endl;

    return 0;
}
