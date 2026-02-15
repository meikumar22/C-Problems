#include <stdio.h>
#include <string.h>

float ans(float a){
    printf("%0.2f", a);

    return 0;
}

int main(){
    int p,r,t;
    scanf("%d %d %d", &p, &r, &t);
    float a = 0;

    a = (p*r*t)/100;
    ans(a);

    return 0;
}