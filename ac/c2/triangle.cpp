#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
#ifndef CON_IO
	freopen("triangle.in", "r", stdin);
	freopen("triangle.out", "w", stdout);
#endif
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2*i; j++)
			printf(" ");
		for (int k = 0; k < 2*(n-i)-1; k++) {
			if (k != 2*(n-i)-2) {
				printf("# ");
			} else {
				printf("#");
			}
		}
		printf("\n");
	}
	return 0;
}
