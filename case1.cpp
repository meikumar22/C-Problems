#include <stdio.h>
int main() {
    int type,unit;
    int a = 0;
    scanf("%d %d", &type, &unit);

    switch (type)
    {
        case 1:
        {
            if (100<unit && unit<200)
            {
                a = unit-100;
                printf("Bill %d",(300+(a*5))-80);
                break;
            }
            else if (unit>=200)
            {
                a=unit-100;
                printf("Bill %d",(300+(a*7))-80);
                break;
            }
            else {
                printf("Bill %d",unit*3);
                break;
            }
            case 2: {
                a = unit-100;
                printf("Bill %d",(10*20)+700);
                break;
            }

        }
    }
}