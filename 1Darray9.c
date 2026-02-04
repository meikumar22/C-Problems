#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int a = 0;
    int b = 0;
    for(int j=n-1; j>=0; j--){
        if(arr[j]>a){
            a = arr[j]; 
            printf("%d ", a);
        }
    }
}