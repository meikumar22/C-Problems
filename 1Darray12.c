#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int target;
    scanf("%d", &target);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int a = 0;
    int b = 0;

    for(int j=0; j<n; j++){
        for(int k=j+1; k<n; k++){
            if(arr[j]+arr[k]==target){
                printf("%d %d ", arr[j], arr[k]);
                b = 1;
                break;
            }
        }
        if(b==1){
            break;
        }
    }
    if(b==0){
        printf("No pair");
    }

}
