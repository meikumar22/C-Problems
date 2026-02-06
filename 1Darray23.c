#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int a = 0;

    for(int j=0; j<n; j++){
        if(arr[j]>0){
            printf("%d", arr[j]);
            a = 1;
            break;
        }
    }
    if(a==0){
        printf("-1");
    }
}