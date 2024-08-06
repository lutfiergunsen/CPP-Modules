#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class Contact
{
public:
    std::string name;
    std::string surName;
    std::string nickName;
    std::string secret;
    std::string telNumber;

    //Constructor
    Contact(){
        std::cout << "contact default constructor Çağırıldı" << std::endl;};

    //Destructor
    ~Contact(){std::cout << "contact destructor Çağırıldı" << std::endl;};
};

class PhoneBook
{
public:
    std::string as;
    Contact people[8];
    int sayac;
    
    //Constructor
    PhoneBook(){std::cout << "Phonebook default constructor Çağırıldı" << std::endl;};

    //Destructor
    ~PhoneBook(){std::cout << "Phonebook destructor Çağırıldı" << std::endl;};
};

#endif
