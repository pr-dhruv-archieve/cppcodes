#include <iostream>
using namespace std;

void check(string data) {
    int i = 0;
    int top = -1;
    char stack[50];
    
    while(data[i] != '\0') {
        if (data[i] == '(' || data[i] == '{' || data[i] == '[')
            stack[++top] = data[i];
        else if (data[i] == ')' && stack[top] == '(')
            top--;
        else if (data[i] == '}' && stack[top] == '{')
            top--;
        else if (data[i] == ']' && stack[top] == '[')
            top--;
        else {
            cout<<"fn not balanced"<<endl;
            return ;
        }
        i++;
    }
    if (top == -1)
        cout<<"balanced"<<endl;
    else
        cout<<"not balanced"<<endl;
}

int main() {
	int n;
	cin>>n;
	
	string data[n];
	for (int i=0;i<n;i++)
	    cin>>data[i];
	
	for (int i=0;i<n;i++)
	    check(data[i]);
	
	return 0;
}
