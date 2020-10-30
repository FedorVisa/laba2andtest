#include <stdio.h>

int checkLetter(char d) {
	if ((d >= 'a') && (d <= 'z')) {
		return 1;
	}
	if ((d >= 'A') && (d <= 'Z')) {
		return 1;
	}
	return 0;
}

int main()
{

	char dat[100000];

	printf("%s", "Enter string\n");

	gets_s(dat);
	int kol = 0;
	int len = 0;
	int nachV = 0;
	int konV = -1;
	for (int i = 0; i < 99999; i++) {
		if (dat[i] == '\0') {

			konV = --i;
			break;
		}
	}


	bool p = true;
	for (int z = nachV, q = konV; z < nachV + (konV - nachV + 1) / 2; z++, q--) {
		if (dat[z] == dat[q]) {

			p = false;
		}

	}
	if (p == false) {
		printf("array is palindrome");
	}

	return 0;
}