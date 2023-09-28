#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#pragma warnings(disable: 4996)

int main() {
    int n = 0;
    int num = 0;
    int ans = 0;
    scanf("%d", &n);

    char str[100];
    scanf("%s", &str);
    //sprintf(str, "%d", num);
    
    for (int i = 0; i < n; i++) {
        ans += str[i] - '0';
        //printf("%d \n", ans);
    }
    printf("%d", ans);
    return 0;
}