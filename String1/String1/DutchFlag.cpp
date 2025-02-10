#include <iostream>
#include <vector>

using namespace std;

void PrintArr(vector<int>* arr) {
	for (int num : *arr)
		cout << num << " ";

	cout << endl;
}

void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void DutchFlag_SinglePass(vector<int>* arr, int pivot) {
	int low = 0, mid = 0, high = arr->size() - 1;
	while (mid <= high)
	{
		if ((*arr)[mid] < pivot)
			swap((*arr)[low++], (*arr)[mid++]);
		else if ((*arr)[mid] > pivot)
			swap((*arr)[high--], (*arr)[mid]);
		else
			mid++;
	}
}

void DutchFlag(vector<int>* arr, int pivot) {
	int lower = 0;
	int higher = arr->size()-1;
	
	for (size_t i = 0; i < arr->size(); i++) {
		if ((*arr)[i] < pivot)
			swap((*arr)[lower++], (*arr)[i]);
	}

	for (int i = arr->size() - 1; i >= 0 && (*arr)[i] >= pivot; i--) {
		if ((*arr)[i] > pivot)
			swap((*arr)[higher--], (*arr)[i]);
	}
}
#if 0
int main() {
	vector<int> arr = { 2, 0, 2, 1, 1, 0, 0, 2, 1, 0 };
	PrintArr(&arr);
	//DutchFlag(&arr, 1);
	DutchFlag_SinglePass(&arr, 1);
	PrintArr(&arr);
} 
#endif 