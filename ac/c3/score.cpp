#include <cstdio>
#include <cstring>

int main()
{
#ifndef CON_IO
	freopen("score.in", "r", stdin);
	freopen("score.out", "w", stdout);
#endif
	char s[80];
	scanf("%s", s);
	int n = strlen(s), total = 0, q = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'O') {
			q++;
			total += q;
		} else {
			q = 0;
		}
	}
	printf("%d\n", total);
	return 0;
}
