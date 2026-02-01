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
        if(a + m <= total){
            a = a + m;
        }
        else{
            b = b + (a+m) -total;
            a = total;
        }

        i++;
    }
    printf("Treated Patients : %d\n", a);
    printf("Rejected Patients : %d", b);
}