#include <stdio.h>

int main(){
    int n,m;
    scanf("%d", &n, &m);
    int success = 0;
    int cancel = 0;

    int i = 0;
    while(i<n){
        scanf("%d", &m);
        if(m==1){
            success++;
        }
        else if(m==0){
            cancel++;
        }
        i++;

        
    }
    printf("Successful : %d\n", success);
    printf("Canceled : %d\n", cancel);
    if(success>=cancel){
        printf("Status : safe");
    }
    else{
        printf("Status : risk");
    }
    
    return 0;
}