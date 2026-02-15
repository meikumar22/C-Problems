#include <stdio.h>

int main(){

    char str[100];
    char str1[100];

    fgets(str, sizeof(str), stdin);
    fgets(str1, sizeof(str1), stdin);

    char *p = str;
    char *c = str1;

    int i = 0;

    while(*(p+i)!='\0'){
        if(*(p+i)=='\n'){
            *(p+i) = '\0';
            break;
        }
        i++;
    }

    for(int j = 0; *(c+j) != '\0'; j++){
        *(p+i) = *(c+j);
        i++;
    }

    *(p+i) = '\0';

    printf("%s", str);

    return 0;
}