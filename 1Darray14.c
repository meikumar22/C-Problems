#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int a = -1;
    int b = 0;

    for(int j=0; j<n; j++){
        if(arr[j]>0){
            if(a==-1 || arr[j]<a){
                a = arr[j];
                b = 1;
            }
        }
    }
    if(b==1){
        printf("%d", a);
    }
    else{
        printf("No positive");
    }
}