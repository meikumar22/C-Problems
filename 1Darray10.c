#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int a = 0;
    int b = -1;

    for(int j=n-1; j>=0; j--){
        a = arr[j];
        arr[j] = b;

        if(a>b){
            b = a;
        }
    }
    for(int k=0; k<n; k++){
        printf("%d ", arr[k]);
    }
}