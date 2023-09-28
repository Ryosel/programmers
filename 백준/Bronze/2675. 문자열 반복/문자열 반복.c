#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	int test_case = 0;
	scanf("%d", &test_case);

	int r = 0;
	char str[1001];
	for (int k = 0; k < test_case; k++) {
		scanf("%d %s", &r, &str);

		for (int i = 0; i < strlen(str); i++) {
			for (int j = 0; j < r; j++) {
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}

	return 0;
}