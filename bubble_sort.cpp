#include "iostream"
using namespace std;
void bubble_sort(int arr[], int size){
    for(int i=0;i<=size;i++){
        for(int j=0;j<=size;j++){
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
 }
int main(){
    int lst[] = {10, 99, 12, 13, 45, 32};
    int max = sizeof(lst) / sizeof(lst[0]) - 1; 
    bubble_sort(lst, max);
    for(int i=0;i<=sizeof(lst)/sizeof(lst[0])-1;i++){
        cout << lst[i] << "\t";
    }
}
