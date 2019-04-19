#include<iostream>

using namespace std;

struct node {
    int data;
    node *next;
};

node *createNode(int data) {
    node *temp = new node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

node *createList(node *head, int data ) {
    //ll is empty
    if(!head) {
        node *newNode = new node;
        newNode->data = data;
        newNode->next = NULL;
        return newNode;
    }   // ll is not empty
    else {
        node *p = head;
        while(p->next != NULL) {
            p = p->next;
        }
        p->next = new node;
        p->next->data = data;
        p->next->next = NULL;
        return head;
    }
}

node *insertAtBegin(node *head, int data) {
    node *p = createNode(data);
    p->next = head;
    return p;
}

void insertAtLast(node *head, int data) {
    node *p = head;
    while(p->next != NULL) {
        p = p->next;
    }
    p->next = createNode(data);
}

void insertAtPosition(node *head,int position, int data) {
    if(position == 1)
        head = insertAtBegin(head,data);
    else {
        int count = 1;
        node *p = head;

        while (count < position - 1 && p != NULL) {
            count++;
            p = p->next;
        }

        node *temp = createNode(data);
        temp->next = p->next;
        p->next = temp;

    }
}

void display(node *head) {
    node *p = head;
    while(p != NULL) {
        cout<<p->data<<"->";
        p = p->next;
    }
    cout<<"X\n";
}

int main() {

    //creating blank list
    node *head = NULL;

    int n, data;
    
    cout<<"Enter nodes : ";
    cin>>n;

    for (int i = 0 ; i < n; i++) {
        cout<<"data : ";
        cin>>data;
        head = createList(head, data);
    }
    cout<<head->data<<endl;
    display(head);
/*
    cout<<"Insert at begin, data : ";
    cin>>data;
    head = insertAtBegin(head, data);

    display(head);

    cout<<"Insert at last, data : ";
    cin>>data;
    insertAtLast(head, data);

    display(head);

    int p;
    cout<<"Insert at position, data : ";
    cin>>data;
    cout<<"Position : ";
    cin>>p;
    insertAtPosition(head,p, data);

    display(head);
*/
    return 0;
}
