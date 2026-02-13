#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    //scanf("%s", &str);
    fgets(str,sizeof(str), stdin);
    int len=strlen(str);

    int count = 0;
    int count1 = -1;

    for(int i=0; i<len; i++){
        if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' ||
        str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U'){
            count++;
        }
        else{
            count1++;
        }
    }
    printf("%d", count1);
}