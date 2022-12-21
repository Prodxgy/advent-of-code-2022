#include <fstream>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>


int main(){
    std::ifstream ifs("input.txt");
    std::vector<char> duplicates;
    std::string line;
    while(std::getline(ifs, line)){
        std::map<char, int> mp;
        std::string compartment_1 = line.substr(0, line.size()/2);
        std::string compartment_2 = line.substr(line.size()/2);
        for(const char & c : compartment_1){
            mp[c]++;
        }
        for (const char & c: compartment_2){
            if(mp.count(c)){
                duplicates.push_back(c);
                break;
            }
        }
    }

    int total = 0;
    for (char c : duplicates){
        if (std::isupper(c))
            total += c-38;
        else 
            total += c-96;
    }
    std::cout << "Part 1: "<< total << std::endl;
    return 0;
}