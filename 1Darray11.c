#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int total = 0;
    int sum = 0;
    int a = 0;
    int b = -1;

    for(int j=0; j<n; j++){
        total += arr[j];
    }

    for(int k=0; k<n; k++){
        sum = total - a - arr[k];

        if(a==sum){
            b = k;
            break;
        }

        a = a + arr[k];
    }
    printf("%d ", b);

    return 0;
}