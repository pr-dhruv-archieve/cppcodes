#include <iostream>
using namespace std;

void solution1(int a[], int n, int sum) {
	int cursum = 0;
	
	for (int i =0; i < n; i++) {
		cursum = a[i];	
		for (int j = i + 1; j < n; j++) {
			if (cursum == sum){
				cout <<i<<" "<<j-1<<endl;
				return;
			}
			if (cursum  > sum)
				break;
			cursum += a[j];
		}
	}
	cout<<"-1"<<endl;
	return;
}

void solution2(int a[], int n, int sum) {
	int cursum = a[0], start = 0;
	
	for (int i = 1; i < n; i++) {
		
		while (cursum > sum && start < i-1) {
			cursum -= a[start];
			start++;
		}
		
		if (cursum == sum) {
			cout <<start+1 <<" "<<i<<endl;
			return ;
		}
		if (i < n)
			cursum += a[i];
	} 
	cout<<"-1"<<endl;
	return ;
}

int main() {
	
	int n;
	cin>>n;
	
	int **a = new int*[n];
	int size[n], sum[n];
	
	for (int i=0;i<n;i++) {
		cin>>size[i]>>sum[i];
		a[i] = new int[size[i]];
		for (int j = 0;j <size[i]; j++)
			cin>>a[i][j];		
	}
	
	for (int i=0;i<n;i++) {
		//solution1(a[i], size[i], sum[i]);
		solution2(a[i], size[i], sum[i]);
	}
	
	return 0;
}
