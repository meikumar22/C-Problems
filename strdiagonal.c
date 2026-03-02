#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s", &str);

    int n = strlen(str);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                printf("%c", str[i]);
            }
            else if(j==n-i-1){
                printf("%c", str[i]);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}
