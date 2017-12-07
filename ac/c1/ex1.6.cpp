#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int rae1, rae2, hyp;
	cin >> rae1 >> rae2 >> hyp;
	long long sq1 = rae1 * rae1;
	long long sq2 = rae2 * rae2;
	long long sq3 = hyp * hyp;
	if (sq1 + sq2 == sq3 || sq2 + sq3 == sq1 || sq1 + sq3 == sq2) {
		cout << "yes" << endl;
		return 0;
	}
	cout << "no" << endl;
	return 0;
}
