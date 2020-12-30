// Selection Sort.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{
    int input[] = { 30,52,29,87,63,27,19,54 };
    int size = 8;
    
    for (int i = 0; i < size; i++) {
        int small = input[i];
        int pos = i;
        for (int j = i + 1; j < size; j++) {
            if (small > input[j]) {
                small = input[j];
                pos = j;
            }
        }
        swap(input[i], input[pos]);
    }
    for (int j = 0; j < 8; j++)
    {
        cout << input[j] << " ";
    }
    cout << endl;
}

