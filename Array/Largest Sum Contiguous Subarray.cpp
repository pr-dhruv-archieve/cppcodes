#include <iostream>
#include <limits.h>

using namespace std;

//Kadane's Algo
int algo1(int a[], int n) {
	int maxsum = INT_MIN, maxend = 0;
	
	for (int i = 0; i < n; i++) {
		//step 1
		maxend += a[i];
		
		//step 2
		if (maxend < 0)
			maxend = 0;
		
		//step 3
		if(maxsum < maxend)
			maxsum = maxend;
	} 
	return maxsum;
}

int algo2(int a[], int n) {
		int final_max = a[0];
		int cur_max = a[0];
		
		for (int i = 1; i < n; i++) {
			cur_max = max(a[i], cur_max + a[i]);
			final_max = max (final_max, cur_max);
		}
		return final_max;
}

int main() {
//	int n;
//	cin>>n;
	
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(a)/sizeof(a[0]);
//	for (int i =0 ; i < n; i++)
//		cin>>a[i];
	
	//Kadane's Algo
//	int maxsum = algo1(a, n);
//	cout<<maxsum<<endl;
	
	int maxsum = algo2(a, n);
	cout<<maxsum<<endl;
	
}
