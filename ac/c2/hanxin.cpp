#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
#ifndef CON_IO
	freopen("hanxin.in", "r", stdin);
	freopen("hanxin.out", "w", stdout);
#endif
	int mod1, mod2, mod3, time = 1;
	while (scanf("%d%d%d", &mod1, &mod2, &mod3) == 3) {
		int a, just = 0;
		for (int i = 10; i < 101; i++) {
			if (i % 3 == mod1 && i % 5 == mod2 && i % 7 == mod3) {
				a = i;
				just = 1;
				break;
			}
		}
		if (just == 1)
			cout << "Case " << time << ": " << a << endl;
		else
			cout << "Case " << time << ": " << "No answer" << endl;
		time++;
		}
	return 0;
}
