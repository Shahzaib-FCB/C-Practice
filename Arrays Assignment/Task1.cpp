#include <iostream>

using namespace std;
void find_the_missing_number(int* array);

int main(int argc, char const *argv[]){
	int array [10] = {1, 5, 7, 2, 3, 4, 5, 6, 8, 5};

	find_the_missing_number(array);
	return 0;
}

void find_the_missing_number(int* array){
	int currentNumber = 1, i = 0, j = 0;

	for (i = 0; i < 10; ++i){
		for (j = 0; j < 10; ++j){
			if(array[j] == currentNumber)
				break;
		}
		// if whole array is checked and not found
		if(j == 10)
			cout << "The Number " << currentNumber << " is missing" << endl;
		currentNumber++;
	}
}