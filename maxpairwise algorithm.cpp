#include <iostream>
#include<vector>
using namespace std;
long long MaxPairwiseProductFast(const vector<int>& numbers) {
	int n = numbers.size();

	int max_index1 = -1;
	for (int i = 0; i < n; ++i)
		if ((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
			max_index1 = i;

	int max_index2 = -1;
	for (int j = 0; j < n; ++j)
		if (((max_index2) != numbers[max_index1]) && ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
			max_index2 = j;
	return ((long long)(numbers[max_index1])) * numbers[max_index2];
}

int main() {

	int x;
	cin >> x;
	vector<int> numbers(x);
	for (size_t i = 0; i < x; ++i)
	{
		cin >> numbers[i];
	}
	long long result = MaxPairwiseProductFast(numbers);
	cout << result << endl;
	return 0;
}