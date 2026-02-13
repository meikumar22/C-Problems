#include <stdio.h>
#include <string.h>
int main(){
    char str[100], s;
    fgets(str,sizeof(str), stdin);
    printf("Enter the character : ");
    scanf("%c", &s);
    int len=strlen(str);

    int index = -1;

    for(int i=0; i<len; i++){
        if(str[i] == s){
            index = i;
            break;
        }
    }
    printf("%d", index);

    return 0;
}