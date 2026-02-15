#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    scanf("%s", str);

    int len = strlen(str);

    int count = 1;

    char *start = str;          
    char *end = str + len - 1;     

    for(int i = 0; i < len/2; i++) {

        if(*start != *end) {
            count = 0;
            break;
        }

        start++;   
        end--;     
    }

    if(count == 1){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}