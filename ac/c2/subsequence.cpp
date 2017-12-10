#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
#ifndef CON_IO
	freopen("subsequence.in", "r", stdin);
	freopen("subsequence.out", "w", stdout);
#endif
	long long n, m, time = 1;
	cin >> n >> m;
	while (!(n == m && m == 0)) {
		double sub = 0;
		for (long long i = n; i < m+1; i++) {
			sub += 1.0/(i*i);
		}
		printf("Case %d: ", time++);
		printf("%.5f\n", sub);
		cin >> n >> m;
	}
	return 0;
}
