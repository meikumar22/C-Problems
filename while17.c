#include <stdio.h>
int main(){
    int balance;
    scanf("%d", &balance);
    int n,m;
    scanf("%d", &n);
    int a = 0;

    int i=0;
    while(i<n){
        scanf("%d", &m);
        if(balance>=m){
            balance = balance - m;
            a++;
        }
        else{
            break;
        }

        i++;
    }
    printf("Successful purchases : %d\n", a);
    printf("Total balance : %d", balance);
}