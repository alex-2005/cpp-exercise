#include <cstdio>
#include <cstring>

int main()
{
#ifndef CON_IO
	freopen("molar_mass.in", "r", stdin);
	freopen("molar_mass.out", "w", stdout);
#endif
	char s[80];
	scanf("%s", s);
	int n = strlen(s);
	double total = 0;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		if (s[i] == 'C') {
			for (int j = i+1; j < 80; j++) {
				if (s[i+1] > '9') {
					sum = 1;
					break;
				}
				if (s[j] >= '0' && s[j] <= '9')
					sum = sum * 10 + s[j] - '0';
				else
					break;
			}
			total += sum * 12.01;
		} else if (s[i] == 'H') {
			for (int j = i+1; j < 80; j++) {
				if (s[i+1] > '9') {
					sum = 1;
					break;
				}
				if (s[j] >= '0' && s[j] <= '9')
					sum = sum * 10 + s[j] - '0';
				else
					break;
			}
			total += sum * 1.008;
		} else if (s[i] == 'O') {
			for (int j = i+1; j < 80; j++) {
				if (s[i+1] > '9') {
					sum = 1;
					break;
				}
				if (s[j] >= '0' && s[j] <= '9')
					sum = sum * 10 + s[j] - '0';
				else
					break;
			}
			total += sum * 16;
		} else if (s[i] == 'N'){
			for (int j = i+1; j < 80; j++) {
				if (s[i+1] > '9') {
					sum = 1;
					break;
				}
				if (s[j] >= '0' && s[j] <= '9')
					sum = sum * 10 + s[j] - '0';
				else
					break;
			}
			total += sum * 14.01;
		}
		if (s[n-1] > '9' && i == (n-1)) {
			if (s[n-1] == 'C')
				total += 12.01;
			else if (s[n-1] == 'H')
				total += 1.008;
			else if (s[n-1] == 'O')
				total += 16;
			else
				total += 14.01;
			}
	}
	printf("%lf\n", total);
	return 0;
}
