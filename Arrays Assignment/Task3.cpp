#include <iostream>

using namespace std;
void reverseArray(int* array, int size);

int main(int argc, char const *argv[]){
	int array [] = {21, 34, 41, 22, 35, 11, 10};

	int size = sizeof(array) / sizeof(int);
	reverseArray(array, size);
	return 0;
}

void reverseArray(int* array, int size){
	// Adjusting the loop end-point according to the size of the array (even vs odd)
	int len = (size % 2 == 0)? size / 2 : (size / 2) - 1;
	
	cout << endl << "Before Reversing :\t";
	for (int i = 0; i < size; ++i)
		cout << array[i] << "\t";
	cout << endl;

	for (int i = 0; i < len; i++){
		array[i] = array[i] + array[size - i - 1];
		array[size - i - 1] = array[i] - array[size - i - 1];
		array[i] = array[i] - array[size - i - 1];
	}

	cout << endl << endl<< "After Reversing :\t";
	for (int i = 0; i < size; ++i)
		cout << array[i] << "\t";
}