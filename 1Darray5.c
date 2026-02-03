#include <stdio.h>
int main(){
    int size;
    scanf("%d", &size);
    int arr[size];

    for(int i=0; i<size-1; i++){
        scanf("%d", &arr[i]);
    }

    int a=0;
    int b=0;
    for(int j=0; j<size; j++){
        if(arr[j]<=size){
            a += arr[j];
        }
        b = size*(size+1)/2;
    }
    printf("%d", b-a);
}