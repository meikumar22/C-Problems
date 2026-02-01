#include <stdio.h>
int main(){
    int weight;
    scanf("%d", &weight);
    int n,m;
    scanf("%d", &n);
    int a = 0;
    int b = 0;
    int c = 0;
    

    int i = 0;
    while(i<n){
        scanf("%d", &m);
        a = a + m;
        if(weight>a){
            b++;
        }
        else{
            c++;
        }
        i++;
    }
    printf("Passengers Allowed : %d\n", b);
    if(weight<a){
        printf("Overload : Yes");
    }
    else{
        printf("Overload : No");
    }
}