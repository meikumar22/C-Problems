#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int a = 0;
    int c = 0;

    for(int j=0; j<n; j++){
        int b = 0;

        for(int k=0; k<j; k++){
            if(arr[j]==arr[k]){
                b = 1;
                break;
            }
        }
        if(b==0){
            c++;
        }
    }
    printf("%d", c);
}