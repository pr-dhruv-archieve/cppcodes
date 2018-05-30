#include <iostream>
using namespace std;

int main() {
	//code
	
	int n;
	cin>>n;
	string s[n];
	
	for(int i = 0 ;i < n; i++)
	    cin>>s[i];
	   
	for(int i =0 ; i < n; i++) {
	    string temp = s[i];
	    string uniq = "";
	    for(int j = 0 ; j < temp.length(); j++) {
	        if(temp.find(temp[j]) != string::npos )
	            uniq += temp[j];
	    }
	    cout<<uniq<<endl;
	}
	
	return 0;
}
