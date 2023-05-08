#include <cstdlib>
#include <string>
#include <iostream>

bool isDouble(const std::string& str) {
    char* endptr;
    strtod(str.c_str(), &endptr);
    return endptr != str.c_str() && *endptr == '\0';
}

int main (){
    std::cout << std::boolalpha << isDouble("22.4")<< '\n';
}