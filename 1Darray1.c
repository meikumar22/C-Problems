#include <stdio.h>
int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    int max=-1;
    int max1=-1;
    
    for(int j=0; j<size; j++){
        if(arr[j]>max){
            max1 = max;
            max = arr[j];
        }
        else if(arr[j]>max1 && arr[j]!=max){
            max1 = arr[j];
        }
    }
    printf("second highest : %d", max1);

    return 0;

}


