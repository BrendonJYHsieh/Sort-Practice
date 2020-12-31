#include <iostream>
using namespace std;

int main()
{
    int input[] = { 63,19,7,90,81,36,54,45,72,27,22,9,41,59,33 };
    int size = 15;
    int flag = 1, gap_size = 15;
    while (flag || gap_size > 1) {
        flag = 0;
        gap_size = (gap_size + 1) / 2;
        for (int i = 0; i < 15 - gap_size;i++) {
            if (input[i + gap_size] < input[i]) {
                swap(input[i + gap_size], input[i]);
                flag = 1;
            }
        }
    }
    for (int j = 0; j < 15; j++)
    {
        cout << input[j] << " ";
    }
    cout << endl;
}
