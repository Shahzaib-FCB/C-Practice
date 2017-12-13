#include <iostream>
#include <vector>

using namespace std;
void deleteNum(int* array, int size, int number);

int main(int argc, char const *argv[]){
	int array [] = {21, 34, 41, 22, 35, 11};

	int size = sizeof(array) / sizeof(int);
	int number = 41;

	deleteNum(array, size, number);
	return 0;
}

void deleteNum(int* array, int size, int number){
	vector <int> result;

	for (int i = 0; i < size; ++i){
		if (array[i] == number)
			continue;
		result.push_back(array[i]);
	}

	for (int i = 0; i < result.size(); ++i)
		cout << result[i] << " ";
}