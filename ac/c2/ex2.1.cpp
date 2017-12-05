#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				long long a = i * i * i, b = j * j * j, c = k * k *k;
				if ((100 * i + 10 * j + k) == (a + b + c))
					cout << i << j << k << endl;
			}
		}
	}
	return 0;
}
