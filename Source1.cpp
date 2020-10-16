#include <stdio.h>
#include "pch.h"


inline int checkLetter(char d) {
	if ((d >= 'a') && (d <= 'z')) {
		return 1;
	}
	if ((d >= 'A') && (d <= 'Z')) {
		return 1;
	}
	return 0;
}

