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
    int b = 0;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j]<a){
                a = arr[i][j];
                b++;
            }
        }
    }
    printf("%d", b);
}