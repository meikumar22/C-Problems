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

    for(int j=0; j<n; j++){
        for(int k=j+1; k<n; k++){
            if(arr[k]>0){
                a = arr[j]*arr[k];
            }
            else if(arr[k]<0){
                b = arr[j]*arr[k];
            }
        }
    }
    if(a<b){
        printf("%d", b);
    }
    else{
        printf("%d", a);
    }
    
}