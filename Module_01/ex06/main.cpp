#include "Harl.hpp"

int main(int word_count, char **str)
{
    if(word_count == 2)
    {
        Harl    harl;

        harl.complain(str[1]);
    }
    else
        std::cout << "Usage: ./harlFilter \"level\"" << std::endl;
    return EXIT_SUCCESS;
}
