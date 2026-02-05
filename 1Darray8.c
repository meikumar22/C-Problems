#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int K;
    scanf("%d", &K);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int a = 0;
    int b = 0;

    for(int j=K; j<n; j++){
        a = arr[j];
        printf("%d ", a);
    }
    for(int k=0; k<K; k++){
        b = arr[k];
        printf("%d ", b);
    }
}