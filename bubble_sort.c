#include "stdio.h"
void bubble_sort(int arr[], int size){
    for(int i=0;i<=size;i++){
        for(int j=0;j<=size;j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void main(){
    int arr[] = {10, 99, 12, 13, 45, 32};
    bubble_sort(arr, sizeof(arr)/sizeof(arr[0])-1);
    for(int i=0;i<=sizeof(arr)/sizeof(arr[0])-1;i++){
        printf("%d \t", arr[i]);
    }
 }
