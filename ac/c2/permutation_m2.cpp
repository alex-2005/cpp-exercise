#include <iostream>
using namespace std;

int main()
{
	for (int a = 1; a < 4; a++) {
		for (int b = 1; b < 10; b++) {
			if (b == a)
				continue;
			for (int c = 1; c < 10; c++) {
				if (c == a || c == b)
					continue;
				for (int d = 2; d < 7; d++) {
					if (d == a || d == b || d == c)
						continue;
					for (int e = 1; e < 10; e++) {
						if (e == a || e == b || e == c || e == d)
							continue;
						for (int f = 1; f < 10; f++) {
							if (f == a || f == b || f == c || f == d || f == d)
								continue;
							for (int g = 3; g < 10; g++) {
								if (g == a || g == b || g == c || g == d || g == e || g == f)
									continue;
								for (int h = 1; h < 10; h++) {
									if (h == a || h == b || h == c || h == d || h == e || h == f || h == g)
										continue;
									int i = 45-a-b-c-d-e-f-g-h;
									int x = 100 * a + 10 * b + c, y = 100 * d + 10 * e + f, z = 100 * g + 10 * h + i;
									if(2 * x == y && 3 * x == z) {
										cout << x << " " <<  y << " " <<  z << endl;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
