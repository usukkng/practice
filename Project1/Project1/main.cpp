#include <iostream>
using namespace std;
void main()
{
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < i ; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
}