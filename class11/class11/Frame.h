#include <iostream>
#include <string>

using namespace std;

class Frame
{
public:
	int a, b;

	Frame() { }

	void* operator new(size_t size)
	{
		cout << "Allocation with new operator.." << endl;

		void *temp = malloc(size);

		if (!temp)
			throw string("bad allocation");

		return temp;
	}

		void* operator new[](size_t size)
	{
		cout << "Allocation with New[] operator.." << endl;

		void *temp = malloc(size);

		if (!temp)
			throw string("bad allocation");

		return temp;
	}

		void operator delete(void *addr)
	{
		cout << "free with delete operator.." << endl;

		free(addr);
		addr = NULL;
	}

	void operator delete[](void *addr)
	{
		cout << "free with delete[] operator.." << endl;

		free(addr);
		addr = NULL;
	}
};