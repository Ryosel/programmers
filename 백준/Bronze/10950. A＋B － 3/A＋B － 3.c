#include <stdio.h>

int main(){
    int test_case;
    int a, b;
    scanf("%d", &test_case);
    for(int i = 0; i < test_case; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }

    return 0;
}