#include <iostream>

struct node {
    int data;
    node *next;
};

class ll{
    private:
    node *head, *tail;
    public:
    ll(){
        head = NULL;
        tail = NULL;
    }

    void addNode(int n){
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head==NULL){
            head = tmp;
            tail = tmp; 
        } else {
            tail->next = tmp;
            tail = tail->next;
        }
    }

    void printNode(){
        node *tmp;
        tmp = head;
        while(tmp!=NULL){
            std::cout<<tmp->data<<std::endl;
            tmp=tmp->next; 
        }
    }
};

int main(){
    ll a;
    a.addNode(1);
    a.addNode(2);

    a.printNode();
    return 0;
}