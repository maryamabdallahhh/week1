 

#include <iostream>
using namespace std;
#include<vector>
#include <cassert>


class vector {
private:
	int* arr = nullptr;
	int size = 0;
public:
	vector(int size) :
		size(size) {
		if (size < 0)
			size = 1;
		arr = new int[size] {};
	}
	void right_rotate() {
		int lastValue = arr[size - 1];
		for (int p = size - 2;p >= 0;--p)
			arr[p + 1] = arr[p];
		arr[0] = lastValue;
	}
	void left_rotate() {
		int firstValue = arr[0];
		for (int a = 1;a < size;a++)
			arr[a - 1] = arr[a];
		arr[size - 1] = firstValue;
	}
	void right_rotate(int times) {
		times %= size;
		while (times--)
			right_rotate();
	}
	int pop(int num) {
		assert(0 <= num && num < size);
		int val = arr[num];
		--size;
		return val;
	}
	int find_tra(int value) {
		for (int i = 0;i < size;i++)
			if (arr[i] == value) {
				if (i == 0)
					return 0;
				swap(arr[i], arr[i - 1]);
				return i - 1;
			}
		return false;
	}
};
int main()
{ 


 }

 