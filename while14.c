#include <stdio.h>
int main(){
    int amount;
    scanf("%d", &amount);
    int n,m;
    scanf("%d", &n);
    int a = 0;
    int b = 0;

    int i=0;
    while(i<n){
        scanf("%d", &m);
        if(amount>=m){
            amount = amount - m;
            a++;
        }
        else{
            break;
        }

        i++;
    }
    printf("Successfully widthrawal : %d\n", a);
    printf("Remaining amount : %d", amount);
}