#include <stdio.h>

int ans(int count, int n, int a){

    for(; n!=0; n=n/10){
        a = n%10;
        count++;
    }

    printf("%d", count);

    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int a = 0;
    int count = 0;

    ans(count,n,a);

    return 0;
}