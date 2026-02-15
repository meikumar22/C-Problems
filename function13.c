#include <stdio.h>

int ans(int a, int A, int B){
    
    for(int i=1; i<=B; i++){
        a = a * A;
    }
    printf("%d", a);

    return 0;
}


int main(){
    int A,B;
    scanf("%d %d", &A, &B);
    int a = 1;

    ans(a, A, B);

    return 0;
}