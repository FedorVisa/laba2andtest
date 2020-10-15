#include <stdio.h>
#include "pch.h"
#include "Header1.h"
int checkLetter(char d) {
	if ((d >= 'a') && (d <= 'z')) {
		return 1;
	}
	if ((d >= 'A') && (d <= 'Z')) {
		return 1;
	}
	return 0;
}

int main1()
{

	char dat[100000];

	printf("%s", "Enter string\n");

	gets_s(dat);
	int kol = 0;
	int len = 0;
	int nachV = -1;
	int konV = -1;
	for (int i = 0; i < 99999;) {

		if (checkLetter(dat[i]) != 0) {
			len++;
			if (nachV == -1) {
				nachV = i;
			}

		}
		else {
			if (nachV != -1) {

				konV = --i;
				bool p = true;
				for (int z = nachV, q = konV; z < nachV + (konV - nachV + 1) / 2; z++, q--) {

					if (dat[z] != dat[q]) {

						p = false;

					}

				}
				if (p == true) {
					for (int y = nachV; y <= konV; y++) {

						printf("%c", dat[y]);

					}
					printf("%s", "\n");
				}
			}
			len = 0;
			konV = -1;
			nachV = -1;
		}
		if (dat[i] == '\0') {
			break;
		}
		i++;

	}

	return 0;
}