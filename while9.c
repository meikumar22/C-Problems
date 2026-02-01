#include <stdio.h>
int main(){
    int fuel;
    scanf("%d", &fuel);
    int n,m;
    scanf("%d", &n);
    int a = 0;
    int b = 0;

    int i=0;
    while(i<n){
        scanf("%d", &m);
        if(fuel >= m){
            fuel = fuel - m;
            b++;
        }
        else{
            break;
        }
        
        i++;
    }

    printf("Completed trip : %d\n", b);
    printf("Remaining fuel : %d", fuel);
}