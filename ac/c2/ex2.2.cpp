#include <iostream>
using namespace std;

int main(void)
{
	int mod1, mod2, mod3;
	cin >> mod1 >> mod2 >> mod3;
	int a, just = 0;
	for (int i = 10; i < 101; i++) {
		if (i % 3 == mod1 && i % 5 == mod2 && i % 7 == mod3) {
			a = i;
			just = 1;
			break;
		}
	}
	if (just == 1)
		cout << a << endl;
	else
		cout << "No answer" << endl;
	return 0;
}
