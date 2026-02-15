#include <stdio.h>
#include <string.h>

int ans(int sum){
    printf("%d", sum);

    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;

    for(; n!=0; n=n/10){
        sum += n%10;
        
    }
    
    ans(sum);

    return 0;
}