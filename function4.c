#include <stdio.h>
#include <string.h>

float ans(float a){
    printf("%0.2f", a);

    return 0;
}

int main(){
    int r;
    scanf("%d", &r);
    float a;

    a = 3.14*r*r;

    ans(a);

    return 0;
}