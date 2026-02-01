#include <stdio.h>
int main(){
    int n,m;
    scanf("%d", &n);
    int delay = 0;
    int days = 0;

    int i=0;
    while(i<n){
        scanf("%d", &m);
        delay = delay + m;
        if(m>2){
            days++;
        }
        i++;
    }
    printf("Total delay : %d\n", delay);
    printf("Delayed days : %d", days);
}