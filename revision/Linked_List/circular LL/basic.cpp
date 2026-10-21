#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next  = NULL;
    }
};

class CircularList{
    Node* tail;

public:
    CircularList(){
        tail = NULL;
    }

    //insert at head
    void insertAH(int val){
        Node* newNode = new Node(val);

        if(tail ==NULL){
            tail = newNode;
            tail->next = newNode;
        } else{
            newNode->next = tail->next;
            tail->next = newNode;
        }
    }

    //insert at tail
    void insertAT(int val){
        Node* newNode = new Node(val);

        if(tail ==NULL){
            tail = newNode;
            tail->next = newNode;
        } else{
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;  
        }
    }

    //delete at head
    void deleteAH(){
        if (tail == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        if (tail == tail->next) {
            delete tail;
            tail = NULL;
        } else {
        Node* temp = tail->next; 
        tail->next = temp->next; 
        temp->next = NULL;      
        delete temp;             
        }
    }

    //delete at tail
    void deleteAT(){
        if (tail == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        if (tail == tail->next) {
            delete tail;
            tail = NULL;
        } else {
        Node* temp = tail->next;

        while(temp->next != tail){
            temp = temp->next;
        } 

        temp->next = tail->next; 
        delete tail;      
        tail = temp;             
        }
    }



    //print list
    void print(){
        if(tail == NULL) return;

        Node* temp = tail->next;  //pints to head node
        cout<<temp->data<<" -> "; // print first node

        temp = temp->next;

        while(temp != tail->next){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        
        cout<<temp->data<<endl;
    }
};

int main(){
    CircularList CL;

    CL.insertAH(1);
    CL.insertAH(2);
    CL.insertAH(3);

    CL.insertAT(4);
    CL.insertAT(5);
    CL.insertAT(6);

    CL.print();

    CL.deleteAH();
    CL.deleteAH();

    CL.deleteAT();
    CL.deleteAT();

    CL.print();

    return 0;
}


// in circular Linked List we usually deal with only tail pointer 
// but we also can use head and tail pointer both if we want