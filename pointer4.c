#include <stdio.h>

int main(){
    char str[100];
    fgets(str,sizeof(str), stdin);
    char *p = str;
    char ch[100];
    char *c = ch;

    for(; *p!='\0'; p++,c++){
        *c = *p;
    }
    *c!='\0';

    printf("%s", ch);

    return 0;
}