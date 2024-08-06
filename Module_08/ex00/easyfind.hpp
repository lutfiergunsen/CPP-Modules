#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

template < typename T >
void easyfind(T &arr, int i)
{
    if(std::find(arr.begin(), arr.end(), i) != arr.end())
        std::cout << i << " is found !" << std::endl;
    else
        std::cout << i << " is not found !" << std::endl;
}

#endif