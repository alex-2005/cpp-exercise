#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int q;
	cin >> q;
	int paid = 95 * q;
	int n = paid / 300;
	int v = n * 300;
	int fee = 300 * 0.85 * n + paid - v;
	printf("%d\n", fee);
	return 0;
}
