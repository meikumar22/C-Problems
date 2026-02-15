#include <stdio.h>

int ans(int n){
    int a = 0;
    int b = 1;
    int c = 0;

    for(int i=1; i<=n; i++){
        printf("%d", a);
        c = a+b;
        a = b;
        b = c;
    }

    return 0;
}

int main(){
    int n;
    scanf("%d", &n);

    ans(n);

    return 0;
}