#include <stdio.h>

int main() {

char str[200];
fgets(str, sizeof(str), stdin);

char *p = str;
int count = 0;

for(int i=0; *(p + i)!='\0'; i++){

    if(i==0 && *(p+i)!=' ' && *(p+i)!='\n'){
        count++;
    }

    if(*(p+i) ==' ' && *(p+i+1)!=' ' && *(p+i+1)!='\0' && *(p+i+1)!='\n'){
        count++;
    }
}

printf("%d", count);

return 0;
}