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
            if(arr[j]==arr[k]){
                a = 1;
                break;
            }
        }
        if(a==1){
            break;
        }
    }
    if(a==1){
        printf("No");
    }
    else{
        printf("Yes");
    }
    
}