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

    for(int i=0; i<r; i++){
        int sum = 0;
        for(int j=0; j<c; j++){
            sum += arr[i][j];
        }
        printf("%d student total Mark : %d\n", i+1, sum);
    }
}