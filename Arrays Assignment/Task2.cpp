#include <iostream>

using namespace std;
void intersection(int* array1, int size1, int* array2, int size2);

int main(int argc, char const *argv[]){
	int array1 [] = {21, 34, 41, 22, 35, 11};
	int array2 [] = {61, 34, 45, 21, 11, 20};

	int size1 = sizeof(array1) / sizeof(int);
	int size2 = sizeof(array2) / sizeof(int);

	intersection(array1, size1, array2, size2);
	return 0;
}

void intersection(int* array1, int size1, int* array2, int size2){
	cout << "The Array Sizes are : " << size1 << ", " << size2 << endl;
	if (size1 != size2){
		cout << "Array Sizes are not equal ... Abort" << endl;
		return;
	}

	cout << endl << "The Intersecting Numbers are : " << endl << "\t\t\t\t";
	for (int i = 0; i < size1; ++i){
		for (int j = 0; j < size2; ++j){
			if (array1[i] == array2[j]){
				cout << array1[i] << "\t";
				//break;	// no use to look through the arrays after the number is found

			}
		}		
	}
}