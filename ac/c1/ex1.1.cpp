#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	double average = (a + b + c) / 3.0;
	printf("%.3f\n", average);
	return 0;
}
