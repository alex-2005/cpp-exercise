#include <cmath>
#include <cstdio>

int main()
{
	double n;
	if (scanf("%lf", &n) == 1) {
		const double pi = acos(-1.0);
		double radian = pi / 180 * n;
		printf("%lf\n", sin(radian));
		printf("%lf\n", cos(radian));
	}
	return 0;
}
