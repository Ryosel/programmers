#include <stdio.h>
#include <string.h>

int main(){
    char name[50] = "";
    char sign[50] = "??!";
    scanf("%s", &name);
    strcat(name, sign);
    printf("%s", name);
    return 0;
    
}