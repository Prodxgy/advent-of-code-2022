#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(){
    std::ifstream ifs("input.txt");
    std::vector<int> vec;
    std::string calorie_str;
    int total=0;
    while(std::getline(ifs, calorie_str)){
        if (calorie_str != ""){
            total+=std::stoi(calorie_str);
        } else {
            vec.push_back(total);
            total = 0;
        }
    }
    std::cout << "Most Calories: " << *std::max_element(vec.begin(), vec.end()) << std::endl;
    total = 0;
    std::vector<int>::iterator it;
    for (int i =0; i < 3; i++){
        it = std::max_element(vec.begin(), vec.end());
        total += *it;
        vec.erase(it);
    }
    std::cout << "Top 3: " << total << std::endl;
    return 0;
}