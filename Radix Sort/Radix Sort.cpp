#include <iostream>
using namespace std;
#define size 8
void radixSort(int[]);

int main()
{
    int input[] = { 30,52,29,87,63,27,19,54 };
    radixSort(input);
    for (int j = 0; j < 8; j++)
    {
        cout << input[j] << " ";
    }
    cout << endl;
}

void radixSort(int data[]) {
    int temp[10][size] = { 0 };
    int order[10] = { 0 };
    int n = 1;
    while (n <= 10) {
        int i;
        for (i = 0; i < size; i++) {
            int lsd = ((data[i] / n) % 10);
            temp[lsd][order[lsd]] = data[i];
            order[lsd]++;
        }
        // 重新排列
        int k = 0;
        for (i = 0; i < 10; i++) {
            if (order[i] != 0) {
                for (int j = 0; j < order[i]; j++, k++) {
                    data[k] = temp[i][j];
                }
            }
            order[i] = 0;
        }
        n *= 10;
    }
}