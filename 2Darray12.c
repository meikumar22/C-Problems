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
            int count = 0;
            for(int k=0; k<r; k++){
                for(int l=j+1; l<c; l++){
                    if(arr[i][j]==arr[k][l]){
                        a = arr[i][j];
                        count++;
                    }
                }
            }
            if(count>b){
                b=count;
                a = arr[i][j];
            }
        }
    }
    printf("%d", a);
}