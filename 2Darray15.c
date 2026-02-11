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
        for(int j=0; j<c; j++){
            int b = 0;
            for(int k=2; k<c; k++){
                if(arr[i][j]%k==0){
                    b = 1;
                    break;
                }
            }
            if(b==1){
               count++;
            }
        }
    }
    printf("%d", count);
}