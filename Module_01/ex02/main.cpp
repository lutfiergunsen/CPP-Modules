#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Bellek Adresleri:" << std::endl;
    std::cout << "str adresi: " << &str << std::endl;
    std::cout << "stringPTR adresi: " << stringPTR << std::endl;
    std::cout << "stringREF adresi: " << &stringREF << std::endl;

    std::cout << "\nString Degerleri:" << std::endl;
    std::cout << "str degeri: " << str << std::endl;
    std::cout << "stringPTR degeri: " << *stringPTR << std::endl;
    std::cout << "stringREF degeri: " << stringREF << std::endl;
}
