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
    int c = 0;

    for(int j=0; j<n; j++){
        for(int k=0; k<n; k++){
            if(arr[j]<arr[k]){
                a = arr[j];
                break;
            }
        }
        for(int l=j+1; l<n; l++){
            if(arr[j]>arr[l]){
                b = arr[j];
                break;
            }
        }
        if(a==b){
            c++;
        }
    }
    printf("%d", c);
}