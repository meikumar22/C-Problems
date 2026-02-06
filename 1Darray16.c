#include <stdio.h>
int main(){
    int n; 
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int a = arr[0];
    int b = arr[1] - arr[0];
    int profit = 0;

    for(int j=1; j<n; j++){
        
        profit = arr[j] - a;

        if(profit > b){
            b = profit;
        }

        if(arr[j] < a){
            a = arr[j];
        }
    }
    printf("%d ", b);
}