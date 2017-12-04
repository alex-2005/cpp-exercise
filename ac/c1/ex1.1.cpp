#include <cstdio>

int main()
{
	int a, b, c;
	if (scanf("%d%d%d", &a, &b, &c) == 3) {
		double average = (a + b + c) / 3.0;
		printf("%.3f\n", average);
	}
	return 0;
}
