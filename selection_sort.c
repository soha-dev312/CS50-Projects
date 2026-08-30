#include <stdio.h>
void selectionsort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int min_index = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        //Swap
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}
int main(void){
    int arr[] = {64, 25, 12, 22, 11};
    selectionsort (arr, 5);
    printf("Sorted array using selection sort!\n");
}
