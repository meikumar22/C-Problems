#include <stdio.h>
int main(){
    int n,m; 
    scanf("%d", &n);
    int a = 0;

    int i = 0;
    while(i<n){
        scanf("%d", &m);
        if(m==0){
            a++;
        }

        i++;
    }

    printf("Inactive weeks : %d\n", a);
    if(n/2<=a){
        printf("Risk status : High");
    }
    else{
        printf("Risk status : Low");
    }
    
}