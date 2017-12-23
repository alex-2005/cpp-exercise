#include <cstdio>

int main()
{
#ifndef CON_IO
	freopen("digit_counting.in", "r", stdin);
	freopen("digit_counting.out", "w", stdout);
#endif
	int n;
	while (scanf("%d", &n) == 1) {
		int s[10] = {0};
		for (int i = 1; i < n+1; i++) {
			int f = i;
			while (f != 0) {
				s[f%10]++;
				f /= 10;
			}
		}
		for (int i = 0; i < 10; i++) {
			if (i != 9)
				printf("%d ", s[i]);
			else
				printf("%d\n", s[i]);
		}
	}
	return 0;
}
