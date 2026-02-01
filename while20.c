#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int m[n];

    int i = 0;
    while(i < n){
        scanf("%d", &m[i]);
        i++;
    }

    int a = 0;      
    int b = 0;      
    int c = -1;     

    i = 1;
    while(i < n){

        if(m[i] < m[i-1]){
            a++;     
            b++;       

            if(b == 3 && c == -1){
                c = i + 1;   
            }
        }
        else{
            b = 0;   
        }

        i++;
    }

    if(c == -1){
        printf("Crash Day: Not Detected\n");
    }
    else{
        printf("Crash Day: %d\n", c);
    }

    printf("Total Drops: %d", a);

    return 0;
}