#include <stdio.h>
int main(){
    int n, amount,count=0;
    scanf("%d", &n);
    int balance;
    scanf("%d", &balance);
    

    int i = 0;
    while(i<n){
        scanf("%d", &amount);
        if(amount<0){
            balance = balance - (-amount);
            if(balance<2000){
                count++;
            }
        }
        else if(balance>0){
            balance = balance + amount;
        }

        i++;
    }
    printf("Final Balance:%d\n", balance);
    printf("low balance days:%d", count);
}