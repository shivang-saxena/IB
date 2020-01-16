/*
Linked-List
Design and implement a Linked List data structure. A node in a linked list should have the following attributes - an integer value and a pointer to the next node. It should support the following operations:
insert_node(position, value) - To insert the input value at the given position in the linked list.
delete_node(position) - Delete the value at the given position from the linked list.
print_ll() - Print the entire linked list, such that each element is followed by a single space.

Note: 1 <= position <= n where, n is the size of the linked-list.
If an input position does not satisfy the constraint, no action is required.

 Sample Input: 3
i 1 23
i 2 24
p
d 1
p

 Sample Output: 23 24
24
*/
#include<iostream>
using namespace std;

class NodeLink{
    public:
    int val;
    NodeLink* next;
    NodeLink(int val){
        this->val = val;
        next = NULL;
    }
};

NodeLink* head=NULL;
int ll_size=0;
void insert_node(int position, int value) {
     if (position >= 1 && position <= ll_size + 1) {
    NodeLink* newnode = new NodeLink(value);
    if(position == 1){
        newnode->next=head;
        head=newnode;
    }
    else{
    int i=1;
    NodeLink* temp=head;
    while(i < position-1){
        temp=temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    }
    ll_size++;
    }
}

void delete_node(int position) {
    if (position >= 1 && position <= ll_size) {
    if(position == 1){
        head=head->next;
    }
    else{
    int i=1;
    NodeLink* prev=head;
    while(i<position-1){
        prev=prev->next;
        i++;
    }
    prev->next = prev->next->next;
    }
        ll_size--;
    }
}
void print_ll() {
   NodeLink* temp=head;
   while(temp != NULL){
       cout<<temp->val<<" ";
       temp=temp->next;
   }
}

int main()  {
    int cases=0, position=0, value=0;
    cin >> cases;
    char ch;
    for(int i=0; i<cases; i++) {
        cin >> ch;
        switch(ch) {
            case 'i':
                cin >> position;
                cin >> value;
                insert_node(position, value);
                break;
            case 'd':
                cin >> position;
                delete_node(position);
                break;
            case 'p':
                print_ll();
                cout << "\n";
                break;
            default:
                cout << "Check Your Input\n";
        }
    }
    return 0;
}