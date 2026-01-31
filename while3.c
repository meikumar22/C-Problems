#include <stdio.h>

int main(){
    int totalGB, usage;
    scanf("%d", &totalGB);
    int days;
    scanf("%d", &days);
    int a = 0;

    int i = 1;
    while(i<=days){
        scanf("%d", &usage);
        if(totalGB>=usage){
            totalGB = totalGB - usage;
            a++;
        }
        else{
            break;
        }
        i++;
    }
    printf("Day used : %d\n", a);
    printf("Remaining Data : %d", totalGB);

    return 0;
}