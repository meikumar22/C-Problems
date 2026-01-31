#include <stdio.h>
int main(){
    int n,m;
    scanf("%d", &n);
    int a = 0;
    int b = 0;

    int i = 0;
    while(i<n){
        scanf("%d", &m);
        if(m==0){
            a++;
            if(a > b){
                b = a;
            }
        }
        else{
            a = 0;
        }

        i++;
    }
    printf("Longest failure streak : %d", b);
}