#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }
};

class DoublyList{
    Node* head;
    Node* tail;

public:
    DoublyList(){
        head = tail = NULL;
    }

    //push_front
    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    //push_back
    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }


    //pop_front
    void pop_front(){
        if(head == NULL) cout<<"DL is empty..";

        Node* temp = head;
        head = head->next;

        if(head != NULL) head->prev = NULL;

        temp->next = NULL;
        delete temp;

    }

    //pop_back
    void pop_back(){
        if(head == NULL) {
            cout<<"DL is empty..";
        return;
        }

        Node* temp = tail;
        tail = tail->prev;

        if(tail != NULL) tail->next = NULL;

        temp->prev = NULL;
        delete temp;

    }

    //print list
    void print(){
        Node* temp = head;

        while(temp != NULL){
            cout<<temp->data<<" <-> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    DoublyList DL;

    DL.push_front(1);
    DL.push_front(2);
    DL.push_front(3);

    DL.push_back(4);
    DL.push_back(5);
    DL.push_back(6);

    DL.print();

    DL.pop_front();
    DL.pop_front();

    DL.pop_back();
    DL.pop_back();

    DL.print();

    return 0;
}