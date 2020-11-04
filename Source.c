#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void function(char* str) {
	int wordlen = 0, i = 0, a = 0, j = 0, b = 0, bool = 0, s = 0, kolvoProxodov = 0;
	while (str[i] != '\0') {

		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
			wordlen++;
			kolvoProxodov = wordlen / 2;
		}
		else {
			//printf("Vxod2, %d\n", i);
			for (a = i - wordlen, b = i - 1; a < b; ++a, --b) {
				if (str[a] == str[b]) {
					//printf("Proverka! k = %d, l = %d", k, l);
					bool++;
					//s = bool;
				}
			}
			if (bool == kolvoProxodov || j == 1) {
				for (a = i - wordlen; a <= i - 1; a++)
					printf("%c", str[a]);
				printf(" ");
			}
			bool = 0;
			wordlen = 0;
		}
		i++;
	}
}

int main()
{
	char str[256];
	printf("Enter the string: ");
	fgets(str, 256, stdin);
	function(str);
	return 0;
}