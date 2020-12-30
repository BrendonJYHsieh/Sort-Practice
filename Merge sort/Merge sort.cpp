#include <iostream>
using namespace std;

void merge_sort(int a[], int start, int end);
void merge(int a[], int start, int mid, int end);

int main()
{
    int input[] = { 39,9,81,45,90,27,72,18 };
    int size = 8;

    merge_sort(input, 0, 7);


    for (int j = 0; j < 8; j++)
    {
        cout << input[j] << " ";
    }
    cout << endl;
}

void merge_sort(int a[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        merge_sort(a, start, mid);
        merge_sort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}
void merge(int a[], int start, int mid, int end) {
    int i = start,j=mid+1,index=0;
    int *temp = new int[end-start + 1];
    while (i<=mid&&j<=end) {
        if (a[i] < a[j]) {
            temp[index] = a[i++];
        }
        else {
            temp[index] = a[j++];
        }   
        index++;
    }
    if (i>mid)
    {
        while (j<=end)
        {
            temp[index++] = a[j++];
        }
    }
    if (j>end)
    {
        while (i <= mid)
        {
            temp[index++] = a[i++];
        }
    }
    for (int k = 0; k < end - start + 1; k++) {
        a[start + k] = temp[k];
    }
}