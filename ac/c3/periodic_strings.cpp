#include <cstdio>
#include <cstring>

int main()
{
#ifndef CON_IO
	freopen("periodic_strings.in", "r", stdin);
	freopen("periodic_strings.out", "w", stdout);
#endif
	char s[80];
	while (scanf("%s", s) == 1) {
		int n = strlen(s);
		for (int i = 0; i < n; i++) {
			int t = i+1, judge = 1;
			if (n % t == 0) {
				char ps[t];
				int p = n/t;
				for (int j = 0; j < t; j++) {
					ps[j] = s[j];
				}
				for (int j = 0; j < p; j++) {
					for (int k = 0; k < t; k++) {
						int f = j*(i+1)+k;
						if (ps[k] == s[f]) {
							judge = 0;
						} else {
							judge = 1;
							break;
						}
					}
					if (judge == 1)
						break;
				}
			}
			if (judge == 0) {
				printf("%d\n", t);
				break;
			}
		}
	}
	return 0;
}
