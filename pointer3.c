#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str), stdin);
    char *p = str;
    int count = 0;

    for(; *p!='\0'; *p++){
        if(*p=='a' || *p=='A' || *p=='e' || *p=='E' || *p=='i' || *p=='I' || 
        *p=='o' || *p=='O' || *p=='u' || *p=='U' ){
            count++;
        }
    }
    printf("%d", count);

    return 0;
}