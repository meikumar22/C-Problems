#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int a = 0;
    int b = 0;
    int count = 0;

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        a = a + arr[i];
    }

    b = a/n;
    for(int j=0; j<n; j++){
        if(arr[j]>b){
            count++;
        } 
    }
    printf("%d", count);
}