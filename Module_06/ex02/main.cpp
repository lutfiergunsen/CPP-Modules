#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main() {
    
    Base	*obj = Base::generate();

	Base::identify(*obj);
	Base::identify(obj);
	delete (obj);
	return (0);
}
