#include<stdio.h>

int ans(int n){
    int original=n;
    int num=0;
    for(int i=n;i>0;i=i/10){
        num+=1;
    }
    int sum=0;
    for(int i=n;i>0;i=i/10){
        int a=i%10;
        int power=1;
        for(int j=1;j<=num;j++){
            power=power*a;
        }
        sum+=power;
    }
    if(sum==original){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }

    return 0;
}
int main(){
    int n;
    scanf("%d",&n);

    ans(n);

    return 0;
}