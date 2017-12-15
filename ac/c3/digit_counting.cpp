#include <cstdio>

int main()
{
#ifndef CON_IO
	freopen("digit_counting.in", "r", stdin);
	freopen("digit_counting.out", "w", stdout);
#endif
	int n;
	scanf("%d", &n);
	int s[10] = {0};
	for (int i = 1; i < n+1; i++) {
		int a[5] = {0}, j = 0, f = i;
		while (f != 0) {
			a[j] = f % 10;
			f /= 10;
			j++;
		}
		for (int k = 0; k < j; k++) {
			int v = a[k];
			s[v]++;
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d :%d\n", i, s[i]);
	}
	return 0;
}
