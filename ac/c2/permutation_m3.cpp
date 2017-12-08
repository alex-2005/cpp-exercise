#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
#ifndef CON_IO
	freopen("permutation_m3.in", "r", stdin);
	freopen("permutation_m3.out", "w", stdout);
#endif
	for (int a = 1; a < 4; a++) {
		for (int b = 1; b < 10; b++) {
			if (b == a)
				continue;
			for (int c = 1; c < 10; c++) {
				if (c == a || c == b)
					continue;
				int x = 100 * a + 10 * b + c;
				int y = 2 * x, z = 3 * x;
				if (z > 987)
					break;
				int digits[10] = {0}, ok = 1;
				digits[0] = digits[a] = digits[b] = digits[c] = 1;
				while (y != 0 && z != 0) {
					int i = y % 10, j = z % 10;
					if (i == j || digits[i] != 0 || digits[j] != 0) {
						ok = 0;
						break;
					}
					y /= 10;
					z /= 10;
					digits[i] = digits[j] = 1;
				}
				if (ok == 1)
					cout << x << " " << 2 * x << " " << 3 * x << endl;
			}
		}
	}
	return 0;
}
