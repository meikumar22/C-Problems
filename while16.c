#include <stdio.h>
int main(){
    int weight;
    scanf("%d", &weight);
    int n,m;
    scanf("%d", &n);
    int a = 0;


    int i=0;
    while(i<n){
        scanf("%d", &m);
        if(weight>m){
            weight = weight - m;
            a++;
        }
        
        else{
            break;
        }
        
        i++;
    }
    printf("People Entered : %d\n", a);
    if(n>a){
        printf("Overload Status : Yes");
    }
    else{
        printf("Overload Status : No");
    }
}