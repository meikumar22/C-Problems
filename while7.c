#include <stdio.h>
int main(){
    int cap;
    scanf("%d", &cap);
    int n,m;
    scanf("%d", &n);
    int a = 0;
    int b = 0;

    int i = 0;
    while(i<n){
        scanf("%d", &m);
        a = a + m;
        if(cap<=a){
            b++;
        }

        i++;
    }
    printf("Final Ocuupied beds : %d\n", a);
    printf("Critical Hours : %d", b);
}