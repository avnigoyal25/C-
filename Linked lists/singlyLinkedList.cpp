#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

    //destructor
    ~node()
    {
        int val=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for data"<<val<<endl;
    }
};

void inserAtHead(node* &head,int val)
{
    node* temp=new node(val);
    temp->next=head;
    head=temp;
}

void insertAtTail(node* &head,int val)       //node by reference because we have to modify our linked list
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void insertAtPosition(node* &head,int pos,int val)
{
    if(pos==1)
    {
        inserAtHead(head,val);
        return;
    }
    node* temp=head;
    for (int i = 1; i < pos-1; i++)
    {
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        insertAtTail(head,val);
        return;
    }
    //creating a new node 
    node* nodeToInsert=new node(val);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}
void deleteNode(int pos,node* &head)
{
    //deleting first or head node
    if(pos==1)
    {
        node* temp=head;
        head=head->next;
        //memory free of start node
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting last or middle node
        node* curr=head;
        node* prev=NULL;
        for (int i = 1; i <pos; i++)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void display(node* head)             //node by value because we are not modifying our linked list
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    //creating a new node
    node* node1=new node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    //head pointed to node1
    node* head=node1;
    display(head);

    inserAtHead(head,12);
    display(head);

    insertAtTail(head,20);
    display(head);

    insertAtPosition(head,4,22);
    display(head);

    deleteNode(3,head);
    display(head);
}
