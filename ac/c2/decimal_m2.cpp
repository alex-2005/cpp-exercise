#include <cstdio>

int main()
{
#ifndef CON_IO
	freopen("decimal.in", "r", stdin);
	freopen("decimal.out", "w", stdout);
#endif
	int a, b, c, count = 1;
	while (scanf("%d%d%d", &a, &b, &c) == 3) {
		if (a == 0 && b == 0 && c == 0)
			break;
		char fmt[16];
		sprintf(fmt, "Case %d: %%.%dlf\n", count++, c);
		printf(fmt, a*1.0/b);
	}
	return 0;
}
