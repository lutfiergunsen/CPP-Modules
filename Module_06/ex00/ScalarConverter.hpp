#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <sstream>
# include <iomanip>

class ScalarConverter {
	public:
		static void type_conversion(std::string str);
		static bool is_it_for_science(std::string &s);
		static bool is_wrong_number(std::string &s);
};


#endif
