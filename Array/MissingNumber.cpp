#include <iostream>
using namespace std;

int missingNumber(int a[], int n) {
    int total = ((n+1)*(n+2))/2;
    for (int i=0;i<n;i++)
        total -= a[i];
    return total;
}

int main() {
	
	int n;
	cin>>n;
	
	int **a = new int*[n];
	int size[n];
	
	for (int i= 0;i < n; i++) {
	    cin>>size[i];
	    a[i] = new int[size[i]-1];
	    for (int j =0;j<size[i]-1;j++)
	        cin>>a[i][j];
	}
	
	for (int i=0;i<n;i++)
	    cout<<missingNumber(a[i], size[i]-1)<<endl;
	return 0;
}
