#include <stdio.h>

void quick_sort(int *, int , int );
void printarray(int* , int );
int main()
{
    int a[10] = {10,1,11,14};
    quicksort(a, 0, 3);
    printarray(a,4);


    return 0;
}
void printarray(int *arr, int n){
    int i;
    for (i=0;i <= n-1; i++){
        printf("%d\n",arr[i]);
    }

}
void quicksort(int *data, int left, int right)
{   int stop_left = 0;
    int stop_right = 0;
    int pivot, i, j;

    if (left >= right) { return; }

    pivot = data[left];

    i = left + 1;
    j = right;

    while (1)
    {
        while (i <= right)
        {
            if (data[i] > pivot)
            {
                break;
            }

            i = i + 1;
        }

        while (j > left)
        {
            if (data[j] < pivot)
            {
                break;
            }

            j = j - 1;
        }

        if (i > j) { break; }

        swap(&data[i], &data[j]);
    }

    swap(&data[left], &data[j]);

    quicksort(data, left, j - 1);
    quicksort(data, j + 1, right);

}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
