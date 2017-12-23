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

		int f = a/b, r = a - b*f, q[c+2];
		q[0] = f;
		for (int i = 1; i < c+2; i++) {
			q[i] = r*10/b;
			r = r * 10 - b*q[i];
		}
		for (int i = c+1; i > 0; i--) {
			if (i == c+1) {
				if (q[i] >= 5) {
					q[i] = 0;
					q[i-1]++;
				} else {
					break;
				}
			} else {
				if (q[i] == 10) {
					q[i] = 0;
					q[i-1]++;
				} else {
					break;
				}
			}
		}
		printf("Case %d: %d.", time++, q[0]);
		for (int i = 1; i < c+1; i++)
			printf("%d", q[i]);
		printf("\n");
	}
	return 0;
}
