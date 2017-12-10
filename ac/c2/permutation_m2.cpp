#include <cstdio>

int main()
{
#ifndef CON_IO
	freopen("permutation_m2.in", "r", stdin);
	freopen("permutation_m2.out", "w", stdout);
#endif
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			for (int k = 1; k < 10; k++) {
				for (int a = 1; a < 10; a++) {
					for (int b = 1; b < 10; b++) {
						for (int c = 1; c < 10; c++) {
							for (int d = 1; d < 10; d++) {
								for (int e = 1; e < 10; e++) {
									if (e!=i && e!=j && e!=k && e!=a && e!=b && e!=c && e!=d && j!=i && k!=i && k!=j && a!=i && a!=j && a!=k && b!=i && b!=j && b!=k && b!=a && c!=i && c!=j && c!=k && c!=a && c!=b && d!=i && d!=j && d!=k && d!=a && d!=b && d!=c) {
										int f = 45-a-b-c-d-e-i-j-k;
										int sum1 = i * 100 + j * 10 + k;
										int sum2 = a * 100 + b * 10 + c;
										int sum3 = d * 100 + e * 10 + f;
										if (sum1 == sum2/2 && sum1 == sum3/3)
												printf("%d%d%d %d%d%d %d%d%d\n", i, j, k, a, b ,c, d, e, f);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
