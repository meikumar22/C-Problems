#include <stdio.h>
int main(){
    int data;
    scanf("%d", &data);
    int n,m;
    scanf("%d", &n);
    int a = 0;
    int b = 0;


    int i=0;
    while(i<n){
        scanf("%d", &m);
        if(n >=m){
            data = data - m;
            a++;
        }
        else{
            break;
        }

        i++;
    }
    printf("Exhausted day : %d\n", a);
    printf("Overused Data : %d", data);
}
