#include <stdio.h>

int main() {
    int num = 0;
    int sum = 0;
    scanf("%d", &num);

    char temp[num+1];
    scanf("%s", temp);
    for(int i = 0; i < num; i++){
        sum += temp[i] - '0';
        //printf("%d\n", sum);
    }
    printf("%d", sum);
    return 0;
}