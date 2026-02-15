#include <stdio.h>
#include <string.h>

int ans(int a, int b){
    if(a>b){
        printf("%d", a);
    }
    else if(a==b){
        printf("%d", a);
    }
    else{
        printf("%d", b);
    }

    return 0;
}


int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    ans(a,b);

    return 0;
}