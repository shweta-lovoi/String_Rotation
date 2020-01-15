//Assume you have a method isSubstring which checks if one word is a substring of another. Given two strings s1 and s2
//write code to check if s2 is a rotation of s1 using only one call to isSubstring(eg. "waterbottle" is a rotation of "erbottlewat"
#include <iostream>
#include <string>
bool isSubstring(std::string, std::string);
int main() {
    std::string s1 = "", s2 = "";
    do{
        std::cout << "Type string 1: ";
        std::cin >> s1;
        std::cout << "Type string 2: ";
        std::cin >> s2;
        if(isSubstring(s2,s1))
            std::cout << std::endl << s2 << " is a rotation of " << s1 << '\n';
        else
            std::cout << s2 << " is NOT a rotation of " << s1 << '\n';
    }
    while(s1 != "#" || s2 != "#");

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
bool isSubstring(std::string s1, std::string s2){
    if(s1.size() != s2.size())
        return false;
    s1 += s1;
    if(s1.find(s2) != std::string::npos)
        return true;
    else
        return false;
}