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

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            for(int k=1; k<r; k++){
                for(int l=1; l<c; l++){
                    if(arr[i][j]==arr[k][l]){
                        printf("%d ", arr[i][j]);
                        a = 1;
                    }
                }
            }
            if(a==1){
                break;
            }
        }
    }
}