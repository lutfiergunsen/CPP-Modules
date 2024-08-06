#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main(int argc, char **argv)
{
    std::ifstream dosya1;
    std::ofstream dosya2;
    std::string temp;
    std::string s1, s2;
    std::string beforeoc;
    std::string afteroc;
    std::size_t found;

    if (argc != 4)
    {
        std::cout << "Hata" << std::endl;
        exit(1);
    }

    dosya1.open(argv[1]);
    s1 = argv[2];
    s2 = argv[3];

    if (!dosya1.is_open())
    {
        std::cout << "HATALI DOSYA" << std::endl;
        exit(1);
    }
    
    dosya2.open((std::string)argv[1] + ".replace");
    
    while (std::getline(dosya1, temp))
    {
        found = temp.find(s1);
        while (found != std::string::npos)
        {
            beforeoc = temp.substr(0, found);
            afteroc = temp.substr(found + s1.size(), temp.size());
            temp = beforeoc + s2 + afteroc;
            found = temp.find(s1);
        }
        dosya2 << temp << std::endl;
    }
    
    std::cout << "\033[1;92mDosya Olusturuldu.\033[0m" << std::endl;
    dosya1.close();
    dosya2.close();

    return(0);
}
