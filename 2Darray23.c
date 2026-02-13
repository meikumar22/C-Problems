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

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(i==0 || i==r-1 || j==0 || j==c-1){
                b += arr[i][j];
            }
        }
    }
    printf("%d", b);
}