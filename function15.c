#include <stdio.h>

int ans(int n){
    int table = 0;

    for(int i=1; i<=10; i++){
        table = i*n;
        printf("%d*%d=%d\n", i,n,table);
    }

    return 0;
}

int main(){
    int n;
    scanf("%d", &n);

    ans(n);

    return 0;
}