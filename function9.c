#include <stdio.h>

int ans(int palindrome, int num){
    if(num==palindrome){
        printf("It is palindrome");
    }
    else{
        printf("It is not palindrome");
    }

    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int num = n;
    int a = 0;
    int palindrome = 0;

    for(; n!=0; n=n/10){
        a = n%10;
        palindrome = palindrome*10+a;
    }

    ans(palindrome,num);

    return 0;
}