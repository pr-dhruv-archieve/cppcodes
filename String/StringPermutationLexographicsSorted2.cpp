#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void permutationSorted(string str) {
	sort(str.begin(), str.end());
	
	do {
		cout<<str<<endl;
	}while(next_permutation(str.begin(),str.end()));
}

int main() {
	string data = "AABC";
//	cin>>data;
	
	permutationSorted(data);
}
