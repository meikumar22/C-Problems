#include <stdio.h>

int ans(int n,int m, char choice){

    if(choice == '+'){
        printf("%d", n+m);
    }
    else if(choice == '-'){
        printf("%d", n-m);
    }
    else if(choice == '*'){
        printf("%d", n*m);
    }
    else{
        printf("choice is not available");
    }

    return 0;
}


int main(){
    int n,m;
    char choice;

    scanf("%d %d", &n, &m);


    printf("Enter the choice : ");
    scanf(" %c", &choice);  

    ans(n,m,choice);

    return 0;
}