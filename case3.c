#include <stdio.h>
int main() {
    int acc;
    scanf("%d",&acc);
    int bal;
    scanf("%d",&bal);
    int wid;
    scanf("%d",&wid);
    switch (acc) {
        case 1:
            if (bal>=wid) {
                printf("transaction succesfull");
                break;
            }
            else {
                printf("transaction failed");
                break;
            }
        case 2:
            if (wid<=5000)
            {
                printf("transaction successfull");
                break;
            }
            else {
                printf("limit exceeded");
                break;
            }
    }
}
