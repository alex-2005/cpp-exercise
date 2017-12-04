#include <cstdio>

int main(void)
{
	double f;
	if (scanf("%lf", &f) == 1) {
		double c = (f-32) * 5/9;
		printf("%.3f\n", c);
	}
	return 0;
}
