#include <stdio.h>
int main(){
    int r,c;
    printf("Enter the r and c value : ");
    scanf("%d %d ", &r, &c);
    int arr[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int b = 0;
    int index = 0;

    for(int i=0; i<r; i++){
        int a = 0;
        for(int j=0; j<c; j++){
            a += arr[i][j];
        }
        if(i==0){
            b = a; 
            index = 0;
        }
        else if(a<b){
            b = a;
            index = i;
        }
    }
    printf("%d ", index);
}