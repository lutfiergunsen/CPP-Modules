#include "MutantStack.hpp"

int main()
{
	{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	{
	std::cout << "Test 2\n";
	MutantStack<std::string> ms;
	ms.push("aaa");
	ms.push("bbb");
	ms.push("ccc");
	ms.push("ddd");
	ms.push("eee");
	MutantStack<std::string>::iterator it = ms.begin();
	MutantStack<std::string>::iterator ite = ms.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	}
	return 0;
}