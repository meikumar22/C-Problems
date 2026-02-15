#include <stdio.h>

int ans(int num){
    printf("%d", num);

    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int num = 0;

    for(int i=1; i<=n; i++){
        num += i;
    }

    ans(num);

    return 0;
}