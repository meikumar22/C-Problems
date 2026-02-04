#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    int a = 0;
    int b = 0;
    for(int j=0; j<n; j++){
        if(arr[j]%2==0){
            a++;
        }
        else{
            b++;
        }
    }
    printf("Even : %d\n", a);
    printf("Odd : %d", b);
}