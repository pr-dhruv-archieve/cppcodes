#include <iostream>
#include <string.h>

using namespace std;

void swap(char *x, char *y) {
	char temp = *x;
	*x =*y;
	*y = temp;
}

void permutation (char* str, int beg, int end) {
	if (beg == end)
		cout<<str<<endl;
	else {
		for (int i =beg; i <= end; i++) {
			swap(str + beg, str + i);
			permutation(str, beg+1, end);
			swap(str + beg, str + i);
		}
	}
}

int main() {
	char data[10];
	cin>>data;
	cout<<"\nPermutations :\n";
	permutation(data, 0, strlen(data) - 1);
}
