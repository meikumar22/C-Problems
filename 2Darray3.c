#include <stdio.h>
int main(){
    int r,c ;
    printf("Enter the r and c value : ");
    scanf("%d %d", &r, &c);
    int arr[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int b = 0;
    int count = 0;

    for(int i=0; i<r; i++){
        int a = 0;
        for(int j=0; j<c; j++){
            for(int k=0; k<j; k++){
                if(arr[i][j]==arr[i][k]){
                    a = arr[i][k];
                    a = 1;
                }
            }
        }

    if(a==b){
        count++;
    }
}
    printf("%d", count);
}