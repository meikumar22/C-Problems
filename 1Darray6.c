#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int a;
    
    for(int j=0; j<n; j++){
        a = 0;
        for(int k=0; k<j; k++){
            if(arr[j]==arr[k]){
                a = 1;
            }
        }
        if(a==0){
            printf("%d ", arr[j]);
        }
    }
    return 0;

}

