#include <iostream>

int simple_string_hash(std::string& str) {
    int hash{};
    for (short i: str ) {
        hash += i;
    }
    return hash;
}

int main() {
    bool exit{true};
    std::string str{};
    while (exit) {
        std::cout << "Enter sting: ";
        std::cin >> str;
        if (str == "exit") {
            std::cout << "Simple hash \"" << str << "\" : " << simple_string_hash(str);
            exit = false;
        }
        else {
            std::cout << "Simple hash \"" << str << "\" : " << simple_string_hash(str) << std::endl;
        }
    } 
}