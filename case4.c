#include <stdio.h>

int main() {
    int c;
    int age;
    int fare;

    scanf("%d %d", &c, &age);

    switch (c) {
        case 1: {
            fare = 300;
            if (age<12) {
                fare = 300/2;
                printf("Fare %d", fare);
                break;

            }
            else if (age>60) {
                fare = 300*2/3;
                printf("Fare %d",fare);
                break;
            }
        }
        case 2: {
            fare = 1000;
            if (age<12) {
                fare = 1000/2;
                printf("Fare %d", fare);
                break;
            }

        }
        default:
            printf("Invalid Number");
            break;

    }
}
