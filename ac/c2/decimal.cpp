#include <cstdio>

int main()
{
#ifndef CON_IO
	freopen("decimal.in", "r", stdin);
	freopen("decimal.out", "w", stdout);
#endif
	int a, b, c;
	while (scanf("%d%d%d", &a, &b, &c) == 3) {
		if (a == 0 && b == 0 && c == 0)
			break;
		double q = a*1.0/b;
		int ig = (int)q;
		double d = q - ig;
		printf("%d.", ig);
		for (int i = 0; i < c-1; i++) {
			d *= 10;
			printf("%d", (int)d);
			d -= (int)d;
		}
		d *= 100;
		int v = (int)d;
		if (v % 10 >= 5) {
			printf("%d\n", v/10 + 1);
		} else {
			printf("%d\n", v/10);
		}
	}
	return 0;
}
