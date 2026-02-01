#include <stdio.h>

int main(){

    int data;
    scanf("%d", &data);

    int n, m;
    scanf("%d", &n);

    int exhaustedDay = 0;
    int overused = 0;

    int i = 0;

    while(i < n){

        scanf("%d", &m);

        data = data - m;

        if(data <= 0){
            exhaustedDay = i + 1;
            overused = -data;
            break;
        }

        i++;
    }

    if(exhaustedDay == 0){
        printf("Exhausted Day : Not Exhausted\n");
        printf("Overused : 0");
    }
    else{
        printf("Exhausted Day : %d\n", exhaustedDay);
        printf("Overused : %d", overused);
    }

    return 0;
}
     