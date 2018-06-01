#include <iostream>
using namespace std;

int eq(int a[],int n) {
	int sum =0;
	int leftsum = 0;
	for (int i =0; i < n; i++)
		sum += a[i];
	
	for (int i = 0; i<n ;i++) {
		sum -= a[i];
		
		if (leftsum == sum)
			return i+1;
		
		leftsum += a[i];
	}
	
	return -1;
}

int main() {
	//code
	int n;
	cin>>n;
	int **a = new int*[n];
	int size[n];
	for (int i =0 ; i < n;i++) {
		cin>>size[i];
		a[i] = new int[size[i]];
		for (int j =0 ; j < size[i];j++)
			cin>>a[i][j];			
	}
	
	for (int i =0 ; i <n; i++)
		cout<<eq(a[i], size[i])<<endl;
	
	return 0;
}
