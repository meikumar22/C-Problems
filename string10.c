#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str), stdin);
    int len=strlen(str);

    for(int i=0; i<len; i++){
        if(str[i]>='A' || str[i]<='Z'){
            str[i] = str[i]+32;
        }
        printf("%c", str[i]);
    }
}