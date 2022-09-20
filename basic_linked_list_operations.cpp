#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node *start(Node *head,int x){
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
}
Node *end(Node *head,int x){
    Node *temp=new Node(x);
    if (head==NULL){
        return temp;
    }
    Node *curr=head;
    while (curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
Node delfirst(Node *head){
    if (head==NULL){
        return NULL;
    }
    else{
        Node *temp=head->next;
        delete head;
        return temp;
    }
}
Node Dellast(Node *head){
    if (head==NULL){
        return NULL;
    }
    if (head->next==NULL){
        delete head;
        return NULL;
    }
    Node *curr=head;
    while (curr->next->next!=NULL){
        curr=curr->next;
    }
    delete curr->next;
    curr->next=NULL;
    return head;
}
Node insertpos(Node *head,int pos,int data){
    Node *temp=new Node(data);
    if (pos==1){
        temp->next=head;
        return temp;
    }
    Node *curr=head;
    for (int i=1;i<=pos-2 && curr!=NULL;i++){
        curr=curr->next;
    }
    if (curr==NULL){
        return head;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
void printn(Node *head){
    Node *curr=head;
    if (curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    Node *head=NULL;
    head=start(head,30);
    printn(head);
    head=start(head,20);
    printn(head);
    head=end(head,40);
    head=end(head,50);
    return 0;
}