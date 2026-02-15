#include <stdio.h>

int ans(int year, int n){
    if(n%400==0){
        printf("It is Leap year");
    }
    else if(n%100==0){
        printf("It is not Lear year");
    }
    else if(n%4==0){
        printf("It is Leap year");
    }
    else{
        printf("It is not Leap year");
    }

    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int year = 0;

    ans(year, n);

    return 0;
}