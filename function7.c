#include <stdio.h>
#include <string.h>

int ans(int n,int count){
    
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("prime");
    }
    else{
        printf("Not prime");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int count = 0;

    ans(n,count);
}
