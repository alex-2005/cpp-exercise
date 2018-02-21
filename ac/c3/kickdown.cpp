#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
#ifndef CON_IO
	freopen("kickdown.in", "r", stdin);
	freopen("kickdown.out", "w", stdout);
#endif
	int a[100], b[100];
	char c;
	int sla = 0;
	while ((c = getchar()) != '\n') {
		a[sla++] = c - '0';
	}
	int slb = 0;
	while ((c = getchar()) != '\n') {
		b[slb++] = c - '0';
	}

	int ans = 0;
	for (int i = 0; i < sla+1; i++) {
		int done = 0;
		for (int j = 0; j < sla-i+1 && j < slb; j++) {
			if (a[i+j] + b[j] == 4) {
				done = 1;
				break;
			}
		}
		if (done == 0) {
			ans = slb+i > sla ? slb+i : sla;
			break;
		}
	}
	printf("%d\n", ans);
	return 0;
}
