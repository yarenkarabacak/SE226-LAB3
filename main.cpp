#include <iostream>
#include <new>
#define MAX 3
using namespace std;
class Node{
   public:
    int data;
    Node *next;
    Node(int x, Node *n){
        data=x;
        next=n;
    }
};
class Stack{
public:
Node *top;
int count;
int size;

Stack(){
top= nullptr;
count=0;

}
void push(int data){
    if(size== MAX){
        cout<<"stack is full"<< endl;
    }
    else{
        if(top== nullptr){
            top= new Node(data, nullptr);
            size++;
            count++;
        }
        else{
            Node* temp = new Node(data,top);
            top=temp;
            size++;
            count++;
        }

    }

}
Node* pop(){
    if(top== nullptr){
        cout<<"NO elements!!!"<<endl;
        return nullptr;
    }
    else{
        Node* temp = top;
        top->next = top;
        size--;
        count--;
        return temp;
    }
}
int topOfStack(){
    if(top== nullptr){
        cout<<"NO elements!!!"<<endl;
        return -1;
    }
    else{
        return top->data ;
    }
}
bool isEmpty(){
    if(top== nullptr){
        return true;
    }
    else return false;
}
int sizeOfStack(){
    if(top== nullptr){
        cout<<"NO elements!!!"<<endl;
        return -1;
    }
    else{
        return size ;
    }
}
void print(){

}

};

int main() {
    Stack *s = new Stack();
    s->push(2);
    s->push(3);
    s->push(4);
    s->push(5);
    cout<<s->count<<endl;


    return 0;
}
