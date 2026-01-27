#include<stdio.h>
int main() {
    int marks;
    scanf("%d", &marks);
    int m = marks/10;
    switch (m){
        case 9:
            printf("Grade A");
            break;
        case 8:
            printf("Grade B");
            break;
        case 7:
            printf("Grade C");
            break;
        case 6:
            printf("Grade D");
            break;
        case 5:
            printf("Grade E");
            break;
        case 4:
            printf("Grade F");
            break;
        case 3:
            printf("Grade Supplementay");
            break;
        case 2:
            printf("Fail");
            break;
    }
}