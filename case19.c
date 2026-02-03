#include<stdio.h>
int main(){
    int a,num;
    scanf("%d %d",&a,&num);

    switch (a)
    {
        case 1:
            if(num>=80){
                printf("Excellent");
            }
            else{
                printf("Eligible");
            }
            break;
        case 2:
            if(num>=60 && num<80){
                printf("Good");
            }
            else{
                printf("Not Not Eligible");
            }
            break;
        case 3:
            if(num>=30 && num<60){
                printf("Eligible");
            }
            break;
        default:
            printf("Enter valid number");
            break;
    }
}
