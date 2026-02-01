#include <stdio.h>

int main() {

    int n, m;
    scanf("%d", &n);

    int total = 0;      
    int current = 0;    
    int longest = 0;   

    int i = 0;

    while(i < n) {

        scanf("%d", &m);

        if(m > 20) {
            total++;        
            current++;     

            if(current > longest) {
                longest = current;   
            }
        }
        else {
            current = 0;    
        }

        i++;
    }

    printf("Congestion Minutes: %d\n", total);
    printf("Longest Congestion Streak: %d", longest);

    return 0;
}