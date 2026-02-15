#include <stdio.h>
#include <string.h>

int ans(int n){
    if(n%2==0){
        printf("It is even number");
    }
    else{
        printf("It is odd number");
    }

}

int main(){
    int n;
    scanf("%d", &n);

    ans(n);
    
    return 0;
}