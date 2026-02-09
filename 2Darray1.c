#include <stdio.h>

int main(){
    int r;
    printf("Enter the r value : ");
    scanf("%d", &r);
    int c;
    printf("Enter the c value : "); 
    scanf("%d", &c);
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
            if(arr[i][j]>a){
                a = arr[i][j];
            }
            if(b<arr[i][j] && a!=arr[i][j]){
                b = arr[i][j];
            }
        }
    }
    printf("%d", b);
}