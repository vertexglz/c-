#include <iostream>
#include <vector>

int binarySearch(const std::vector <int> &numbers, int target){
	int left = 0;
	int right = static_cast<int>(numbers.size()) - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (numbers[mid] == target) {
			return mid;
		}
		else if (numbers[mid] < target) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return -1;

}


int main() {

	std::vector <int> numbers = { 2,5,8,12,16,23,38,56,72 };
	int result = binarySearch(numbers, 100);
	std::cout << result << '\n';


}