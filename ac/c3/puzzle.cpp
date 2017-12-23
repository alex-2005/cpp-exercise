#include <cstdio>
#include <cstring>

int main()
{
#ifndef CON_IO
	freopen("puzzle.in", "r", stdin);
	freopen("puzzle.out", "w", stdout);
#endif
/*
	char s[25], l;
	for (int i = 0; i < 25; i++) {
		scanf("%c", s[i]);
		if (s[i] == '*')
			l = i;
	}
	char c;
	while ((c = getchar()) != EOF) {
		char e;
		if (c == '0') {
			break;
		} else if (c == 'A') {
			if ((l-5) > -1)
				e = s[l];
				s[l] = s[l-5];
				s[l-5] = e;
				l -= 5;
			} else {
				printf("This puzzle has no final configuration.\n");
				break;
			}
		} else if (c == 'B') {
			if ((l+5) < 25) {
				e = s[l];
				s[l] = s[l+5];
				s[l+5] = e;
				l += 5;
			} else {
				printf("This puzzle has no final configuration.\n");
				break;
			}
		} else if (c == 'L') {
			if (l % 5 != 1) {
				e = s[l];
				s[l] = s[l-1];
				s[l-1] = e;
				l -= 1;
			} else {
				printf("This puzzle has no final configuration.\n");
				break;
			}
		} else {
			if (l % 5 != 0) {
				e = s[l];
				s[l] = s[l+1];
				s[l+1] = e;
				l += 1;
			} else {
				printf("This puzzle has no final configuration.\n");
				break;
			}
		}
	}
	printf("%s", s);
*/
	return 0;
}
