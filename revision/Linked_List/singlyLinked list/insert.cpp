#include <iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;


    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = NULL;
        tail = NULL;
    }


    //push_front
    void push_front(int val){
        Node* newNode = new Node(val);    // ---create new node
        // Node newNode(val); -- static
        
        if(head == NULL){
            head = tail = newNode;
            return;
        } else{
            newNode->next = head;
            head = newNode;
        }
    }

    // push_back
    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    //insert
    void insert(int val , int pos){
        if(pos<0){
            cout<<"Invaid position"<<endl;
            return;
        }

        if(pos==0){
            push_front(val);
            return;
        }

        Node* temp = head ;
        for(int i=0 ; i<pos-1 ;i++){
            if(temp == NULL){
                cout<<"Invalid Position"<<endl;
                return;
            }
            temp = temp->next;   
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;

    }

    //search
    int search(int key){
        Node* temp = head;
        int ind = 0;

        while(temp!=NULL){
            if(temp->data == key){
                return ind;
            }

            temp = temp->next;
            ind++;
        }
        return -1;
    }

    void printll(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;   // update temp
        }
        cout<<"NULL"<<endl;
    }
 
};


int main(){
    List l;

    l.push_front(1);
    l.push_front(2);

    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    
    l.printll();

    l.insert(6 , 5);
    l.printll();


    cout<<"Search is : " <<l.search(5)<<endl;

    return 0;
}

// insert new node at a position
// search in linked List