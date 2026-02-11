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

    int a = 0;
    int count = 0;

    for(int i=0; i<r; i++){
        int max = 0;
        int min = 99999;
        for(int j=0; j<c; j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }

            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
        a = max - min;
        if(a<=1000){
            count++;
        }
    }
    printf("%d", count);
}