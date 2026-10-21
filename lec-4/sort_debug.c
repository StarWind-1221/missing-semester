#include <stdio.h>
#include <stdlib.h>


void merge(int left[], int len_left, int right[], int len_right, int result[]){
    int i = 0, j = 0, k = 0;
    while (i < len_left && j < len_right){
        if (left[i] <= right[j]){
            result[k] = left[i];
            i = i + 1;
        }
        else{
            result[k] = right[j];
            j = j + 1;
        }
        k++;
    }

    while (i < len_left){
        result[k] = left[i];
        i = i + 1;
        k++;
    }

    while (j < len_right) {
        result[k] = right[j];
        j = j + 1;
        k++;
    }
}

int *merge_sort(int arr[], int len){
    if (len <= 0){
        return NULL;
    }

    int *result = (int *)malloc(len * sizeof(int));
    
    if (result == NULL){
        perror("malloc");
        exit(1);
    }

    if (len == 1){
        result[0] = arr[0];
        return result;
    }

    int mid = len/2;

    int *left = merge_sort(arr, mid);

    int *right = merge_sort(arr + mid, len - mid);

    int len_left = mid, len_right = len - mid;

    merge(left, len_left, right, len_right, result);
    
    free(left);
    free(right);

    return result;
}

int main(void) {
    // int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int arr[] = {1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *sorted = merge_sort(arr, n);

    printf("排序结果: ");
    for (int i = 0; i < n; i++)
        printf("%d ", sorted[i]);
    printf("\n");

    free(sorted);
    return 0;
}
