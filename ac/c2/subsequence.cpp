#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	long long n, m;
	cin >> n >> m;
	while (!(n == m && m == 0)) {
		double sub = 0;
		for (long long i = n; i < m+1; i++) {
			sub += 1.0/(i*i);
		}
		printf("%.5f\n", sub);
		cin >> n >> m;
	}
	return 0;
}
