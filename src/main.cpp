#include <iostream>
#include "MathUtils.h"
#include "AdvancedUtils.h"

using namespace std;
int main()
{
	int a = 3;
	int b = 4;
	cout << "a + b = " << add(a, b) << endl;
	cout << "a * b = " << multiply(a, b) << endl;
	cout << "square(a) = " << square(a) << endl;
	return 0;
}
