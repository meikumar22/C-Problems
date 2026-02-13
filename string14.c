#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str), stdin);
    int len = strlen(str);
    int i;
    char ch[100];
    
    for(i=0; i<len; i++){
        ch[i] = str[i];
    }
    ch[i]!=0;

    printf("%s", ch);
}