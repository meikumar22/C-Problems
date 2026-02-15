#include <stdio.h>
#include <string.h>

void ans(int fact){
    printf("%d", fact);
}

int main(){
    int n;
    scanf("%d", &n);
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }

    ans(fact);

    return 0;
}