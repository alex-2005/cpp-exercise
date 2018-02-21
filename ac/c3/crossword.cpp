#include <cstdio>

int main()
{
#ifndef CON_IO
	freopen("crossword.in", "r", stdin);
	freopen("crossword.out", "w", stdout);
#endif
	int r, c;
	scanf("%d%d", &r, &c);
	char s[r][c+1];
	for (int i = 0; i < r; i++) {
		scanf("%s", s[i]);
	}
	for (int i = 0; i < r; i++) {
		int yes = 0;
		for (int j = 0; j < c; j++) {
			if (s[i][j] != '*') {
				yes = 1;
				printf("%c", s[i][j]);
			} else if (s[i][j] == '*' && yes == 1) {
				yes = 0;
				printf("\n");
			}
		}
		if (yes == 1)
			printf("\n");
	}

	for (int i = 0; i < c; i++) {
		int yes = 0;
		for (int j = 0; j < r; j++) {
			if (s[j][i] != '*') {
				yes = 1;
				printf("%c", s[j][i]);
			} else if (s[j][i] == '*' && yes == 1) {
				yes = 0;
				printf("\n");
			}
		}
		if (yes == 1)
			printf("\n");
	}
	return 0;
}
