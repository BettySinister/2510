#include <iostream>
using namespace std;

const int M = 10;
const int N = 7;

int main() {
	int array1[M] = { 1, 2, 8, -9, 0, 5, 45, 7, -3, 1 };
	int array2[N] = { 1, 3, 0, 44, -5, 2, 8 };
	bool flag;

	for (int i = 0; i < M; i++) {
		flag = false;
		for (int j = 0; j < N; j++) {
			if (array1[i] == array2[j]) { // совпадение найдено? да - переключить
				flag = true;
			}
		}
		if (flag == false) {
			cout << array1[i] << endl;
		}
	}
}