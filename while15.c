#include <stdio.h>
int main(){
    int n,m;
    scanf("%d", &n);
    int a = 0;
    int b = 0;

    int i = 0;
    while(i<n){
        scanf("%d", &m);
        a = a + m;
        if(m>4){
            b++;
        }

        i++;
    }
    printf("Total overtime : %d\n", a);
    printf("Burnout Days : %d", b);
}