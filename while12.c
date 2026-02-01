#include <stdio.h>
int main(){
    int n,m;
    scanf("%d", &n);
    int max = 0;
    int a = 0;

    int i=0;
    while(i<n){
        scanf("%d", &m);
        if(i==0){
            max = m;
        }
        else if(m>max){
            max = m;
        }
        
        if(m>5){
            a++;
        }

        i++;
    }
    printf("Max usage : %d\n", max);
    printf("Surge Hours : %d", a);
}