#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream file("students.dat");
    std::string data;
    std::string line;
    
    //get each line
    while (std::getline(file, line)){
        std::stringstream linestream(line);
        
        //seperate by commas
        while (std::getline(linestream, data, ',')){
            std::cout << data;
        }
    }
    file.close();
    
    return 0;
}
