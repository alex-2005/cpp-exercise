#include <cstdio>

void print(int a[], int len)
{
	for (int i = 0; i < len; i++)
		printf("%d: %d, ", i, a[i]);
	printf("\n");
}

int main()
{
#ifndef CON_IO
	freopen("repeating.in", "r", stdin);
	freopen("repeating.out", "w" ,stdout);
#endif
	int a, b;
	scanf("%d%d", &a, &b);

	int remainders[b], i = 1;
	int quotients[b];
	quotients[0] = a/b;
	remainders[0] = a - quotients[0]*b;
	a = remainders[0];

	int ans = -1;
	while (1) {
		a *= 10;
		int q = a/b;
		int r = a - q*b;
		quotients[i] = q;

//		printf("a : %d, ", a);
		a = r;
		remainders[i] = r;

//		printf("q : %d, r : %d, remainders[i] = %d\n", q, r, remainders[i]);
		for (int j = 0; j < i; j++) {
			if (remainders[j] == remainders[i]) {
//				printf("found at %d: %d\n", j, remainders[j]);
//				print(remainders, i);
				ans = j;
				break;
			}
		}

		if (ans != -1)
			break;
		i++;
	}

	printf("%d.", quotients[0]);
	for (int j = 1; j < ans+1; j++) {
		printf("%d", quotients[j]);
	}
	printf("(");
	for (int j = ans+1; j < i+1; j++) {
		printf("%d", quotients[j]);
	}
	printf(") ");

	printf("%d\n", i-ans);
	return 0;
}
