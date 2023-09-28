#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
 
    int str[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &str[i]);
    }
    
    int v;
    scanf("%d", &v);
    
    int ans;
    for(int i = 0; i < n; i++){
        if(str[i] == v) ans++;
    }
    printf("%d\n", ans);
    return 0;
}