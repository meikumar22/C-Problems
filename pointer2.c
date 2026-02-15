#include <stdio.h>

void maxnum(int n, int arr[]){
    int *p = arr;
    int max = *p;

    for(int i=0; i<n; i++){
        if(*(p+i)>max){
            max = *(p+i);
        }
    }
    printf("%d", max);
}


int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    maxnum(n,arr);

    return 0;
}