#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	int word_cnt = 0; //ans
	char str[1000002];
	scanf("%[^\n]s", str);
	//printf("%s", str);

	int idx = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (isspace(str[i]) != 0) { //if str[i] is space
			if (idx >= 1) {
				word_cnt++;
				idx = 0;
			}
			else continue;
		}
		else { //if str[i] isn't space
			idx++;
		}
	}
	if(word_cnt == 0){
		char ch = str[0];
        if(isspace(ch) != 0)
            printf("%d\n", word_cnt);
        else
            printf("%d\n", word_cnt+1);
    }
    else{
        char ch = str[strlen(str)-1];
        //printf("%c", ch);
        if(isspace(ch) != 0)
            printf("%d\n", word_cnt);   
        else printf("%d\n", word_cnt+1);
    }
	return 0;
}