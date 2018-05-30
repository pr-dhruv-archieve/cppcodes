#include <iostream>

using namespace std;

int n;

void printArray(int a[], int n) {
	for(int i = 0; i < n; i++)
		cout<<a[i];
	cout<<endl;
}
static int k;
void generateString(int a[], int m) {
	if(m < 1){
		cout<<"\t\t   ";
		printArray(a, n);
		k++;
		return ;
	}
	else {
		cout<<"n="<<m<<" updated at : "<<m-1<<endl;
		a[m-1] = 0;
		generateString(a,m-1);
		cout<<"n="<<m<<" updated at : "<<m-1<<endl;
		a[m-1] = 1;
		generateString(a,m-1);
	}
}

int main() {
	
	int m;
	cout<<"Enter the number of the bits : ";
	cin>>n;
	
	m = n;
	
	int a[n];
	for(int i =0 ; i < n; i++) 
		a[i] = 0;
	
	generateString(a,m);
	
	return 0;
}
