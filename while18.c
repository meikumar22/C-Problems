#include <stdio.h>
int main(){
    int total;
    scanf("%d", &total);
    int n,m;
    scanf("%d", &n);
    int a = 0;
    int b = 0;

    int i=0;
    while(i<n){
        scanf("%d", &m);
        if(total>m){
            a++;
        }
        else{
            b++;
        }

        i++;
    }
    printf("Safe hours: %d\n", a);
    printf("Failure count : %d", b);
}