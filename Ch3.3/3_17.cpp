#include <iostream>
#include <vector>

int main(){
    std::vector<int> vector_i;
    int temp { 0 };

    while(std::cin >> temp){
        vector_i.push_back(temp);
    }
    for (const auto &i : vector_i)
        std::cout << i << " ";
    std::cout << std::endl;

    for (std::size_t index{ 0 } ; index < vector_i.size() ; ++index){
        if (index == 0){
	    std::cout << vector_i[0] + vector_i[1] << " ";
	}else if (index == vector_i.size() - 1){
	    std::cout << vector_i[vector_i.size() - 1] + vector_i[vector_i.size() - 2] << std::endl;
	}else{
	    std::cout << vector_i[index] + vector_i[index + 1] + vector_i[index - 1] << " ";
	}
    }

    for (std::size_t flag { 0 } ; flag < vector_i.size() ; ++flag){
        std::cout << vector_i[flag] + vector_i[vector_i.size() - flag -1] << " ";
    }
    std::cout << std::endl;


    return 0;	    
}
