#include <stdio.h>
int main(){
    int r,c;
    printf("Enter the r and c value : ");
    scanf("%d %d", &r, &c);
    int arr[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int b = 0;
    int index = 0;

    for(int j=0; j<c; j++){
        int a = 0;
        for(int i=0; i<r; i++){
            a +=arr[i][j];
        }
        if(j==0 || a>b){
            b = a;
            index = j;
        }
    }
    printf("%d ", index);
}