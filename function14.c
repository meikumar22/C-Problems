#include <stdio.h>

int ans(int n){
    int p = 0;

    for(int i=1; i<n; i++){
        if(n%i==0){
            p = p + i;
        }
    }

    if(n==p){
        printf("It is perfect number");
    }
    else{
        printf("It is not perfect number");
    }

    return 0;
}

int main(){
    int n; 
    scanf("%d", &n);

    ans(n);

    return 0;
}