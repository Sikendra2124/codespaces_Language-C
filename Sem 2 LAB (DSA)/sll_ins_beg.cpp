#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node *insertbeg(Node *head, int x){
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
}
int main(){
    Node *head = NULL;
    head=insertbeg(head,30);
    head=insertbeg(head,20);
    head=insertbeg(head,10);
    return 0;
}