#include <iostream>
using namespace std;

void display (int a[], int n) {
    cout<<a[0];
    for (int i = 1; i < n; i++)
        cout<<" "<<a[i];
    cout<<endl;
}

void sorting1(int a[], int n) {
    int zero = 0;
    int one = 0;
    int two = 0;
	int index= -1;
	
	for (int i = 0 ; i < n; i++) {
		if(a[i] == 0)
			zero++;
		if(a[i] == 1)
			one++;
		if(a[i] == 2)
			two++;
	}

	for (int i = 0 ; i < zero; i++)
		a[++index] = 0;
	for (int i = 0 ; i < one; i++)
		a[++index] = 1;
	for (int i = 0 ; i < two; i++)
		a[++index] = 2;
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void arrange(int a[], int n) {
	int low = 0;	//starting index
	int high = n-1;	//ending index
	int mid = 0;	//for traversing
	
	while (mid <= high) {
		switch(a[mid]) {
			case 0:
				swap(&a[low], &a[mid]);
				low++, mid++;
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(&a[mid], &a[high]);
				high--;
				break;
		}	
	}
}

int main() {
	int n;
	cin>>n;
	
	int **a = new int*[n];
	int size[n];
	
	for (int i = 0 ;i < n; i++)  {
	    cin>>size[i];
	    
	    a[i] = new int[size[i]];
	    for (int j = 0; j < size[i]; j++)
	        cin>>a[i][j];
	}
	
	for (int i = 0; i < n; i++) {
	    //sorting1(a[i], size[i]);
	    arrange(a[i], size[i]);
	    display(a[i], size[i]);
	}
	
	return 0;
} 	
