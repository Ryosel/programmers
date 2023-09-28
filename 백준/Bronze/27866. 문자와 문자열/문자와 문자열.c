#include <stdio.h>

int main(){
    char str[1001];
    int idx = 0;
    
    scanf("%s\n", &str);
    scanf("%d\n", &idx);
    
    printf("%c", str[idx-1]);
    return 0;
}