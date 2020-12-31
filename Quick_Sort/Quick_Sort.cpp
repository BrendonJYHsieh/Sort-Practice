#include <iostream>
#include<string>
#include<vector>

using namespace std;

void quicksort(vector<string>& list, int, int end);

void partition(vector<string>& list, int front, int end);

int main()
{
	string input;
	vector<string>list;

	while (cin >> input)
	{
		list.push_back(input);
		char ch = getchar();
		if (ch == '\n')
			break;
	}
	quicksort(list, 0, list.size() - 1);
	for (int i = 0; i < list.size(); i++) {
		cout << list[i];
		if (i != list.size() - 1)
			cout << " ";
	}
}

void quicksort(vector<string>& list, int begin, int end) {
	if (begin < end) {
		int pivot = (begin + end) / 2;
		partition(list, begin, end);
		quicksort(list, begin, pivot - 1);
		quicksort(list, pivot + 1, end);
	}
}
void partition(vector<string>& list, int front, int end) {
	string pivot = list[end];
	int count = front - 1;
	for (int j = front; j < end; j++) {
		if (list[j] < pivot) {
			swap(list[++count], list[j]);
		}
	}
	count++;
	swap(list[count], list[end]);
}