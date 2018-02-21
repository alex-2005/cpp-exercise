#include <cstdio>
#include <cstring>

using namespace std;

int max2(int a, int b)
{
	return a > b ? a : b;
}

int max(int a, int b, int c)
{
/*
	int t;
	if (a > b) {t = a; a = b; b = t;}
	if (a > c) {t = a; a = c; c = t;}
	if (b > c) {t = b; b = c; c = t;}
	return c;
*/
	return max2(a, max2(b, c));
}

int main()
{
#ifndef CON_IO
	freopen("dna.in", "r", stdin);
	freopen("dna.out", "w", stdout);
#endif
	int m, n;
	scanf("%d%d", &m, &n);
	char s[m][n+1];
	for (int i = 0; i < m; i++) {
		scanf("%s", s[i]);
	}
	char acg[] = "ACG";
	for (int i = 0; i < n; i++) {
		int a = 0, c = 0, g = 0, t = 0;
		for (int j = 0; j < m; j++) {
			if (s[j][i] == 'A') {
				a++;
			} else if (s[j][i] == 'C') {
				c++;
			} else if (s[j][i] == 'G') {
				g++;
			} else {
				t++;
			}
		}
		int co[3];
		co[0] = a, co[1] = c, co[2] = g;
		int maxn = max(a, c, g);
		if (t > maxn) {
			printf("T");
		} else {
			for (int k = 0; k < 3; k++) {
				if (co[k] == maxn) {
					printf("%c", acg[k]);
					break;
				}
			}
		}
	}
	printf("\n");
	return 0;
}
