#include <cstdio>

int main()
{
#ifndef CON_IO
	freopen("decimal.in", "r", stdin);
	freopen("decimal.out", "w", stdout);
#endif
	int a, b, c, time = 1;
	while (scanf("%d%d%d", &a, &b, &c) == 3) {
		if (a == 0 && b == 0 && c == 0)
			break;
		double q = a*1.0/b;
		int ig = (int)q;
		double d = q - ig;
		int d1[c+1];
		printf("Case %d: %d.",time, ig);
		for (int i = 0; i < c+1; i++) {
			d *= 10;
			d1[i] = (int)d;
			d -= (int)d;
		}
		for (int i = c; i > -1; i--) {
			if (i == c) {
				if (d1[c] > 4)
					d1[c-1]++;
			} else {
				if (d1[i] == 10) {
					d1[i] = 0;
					d1[i-1]++;
				}
			}
		}
		for (int i = 0; i < c; i++) {
			printf("%d", d1[i]);
		}
		printf("\n");
		time++;
	}
	return 0;
}
