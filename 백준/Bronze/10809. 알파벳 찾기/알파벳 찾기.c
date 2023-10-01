#include <stdio.h>
#include <string.h>

int main() {
    char comp[101] = "abcdefghijklmnopqrstuvwxyz";
    char str[101];
    scanf("%s", &str);

    char* ptr = NULL;
    for(int i = 0; i < strlen(comp); i++){
        ptr = strchr(str, comp[i]);

        if(ptr != NULL){
            //printf("%s ", ptr);
            for(int j = 0; j < strlen(str); j++){
                if(str[j] == ptr[0]) { printf("%d ", j); break; }
            }
        }
        else{ 
            printf("-1 "); 
        }
    }
    return 0;
}