#include <fstream>
#include <iostream>


int main(){
    std::ifstream ifs("input.txt");
    int total_p1 = 0;
    int total_p2 = 0;
    std::string line;
    while(std::getline(ifs, line)){
        char opponent = line[0];
        char self = line[2];
        if (opponent == 'A'){
            if (self == 'X'){
                total_p1 += 1 + 3;
                total_p2 += 3 + 0;
            }
            else if (self == 'Y'){
                total_p1 += 2 + 6;
                total_p2 += 1 + 3;
            }
            else if (self == 'Z'){
                total_p1 += 3 + 0;
                total_p2 += 2 + 6;
            }
        } else if (opponent == 'B'){
            if (self == 'X'){
                total_p1 += 1 + 0;
                total_p2 += 1 + 0;
            } else if (self == 'Y'){
                total_p1 += 2 + 3;
                total_p2 += 2 + 3;
            } else if (self == 'Z'){
                total_p1 += 3 + 6;
                total_p2 += 3 + 6;
            }
        } else if (opponent == 'C'){
            if (self == 'X'){
                total_p1 += 1 + 6;
                total_p2 += 2 + 0;
            } else if (self == 'Y'){
                total_p1 += 2 + 0;
                total_p2 += 3 + 3;
            } else if (self == 'Z'){
                total_p1 += 3 + 3;
                total_p2 += 1 + 6;
            }
        }
    }
    std::cout << "Part 1: " << total_p1 << std::endl;    
    std::cout << "Part 2: " << total_p2 << std::endl; 
}