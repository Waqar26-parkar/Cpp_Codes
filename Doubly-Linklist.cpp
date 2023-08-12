




#include <bits/stdc++.h>
using namespace std;


class node
{
    public:
    int data;
    node* next;
    node* prev;

    node(int val)
    {
    this->data= val;
    this->next=NULL;
    this->prev=NULL;
    }

};




//-----Insert at  head or start------

void Insertathead(node* &head, int val)
{

    node* temp=new node(val);

    if(head==NULL)
    {
       head=temp;
    }

    temp->next=head;
    temp->prev=NULL;
    head->prev=temp;
    head=temp;

}


//-------Insert at tail or end----------

void Insertattail(node* &tail,int val)
{

    node* temp=new node(val);
    tail->next=temp; 
    temp->prev=tail;
    temp->next=NULL;
    tail=temp;
}





//-----Insert at any position in doubly linklist------
void Insertatanyposition(node* &tail, node* &head, int position, int val)
{
     
     
//node* temp=new node(val);   

     if(position==1)
     {
        Insertathead(head,val);
        return;
     }

    
 
 node* temp=head;

    int cnt=1;

    while(cnt<position-1)
    {
        temp=temp->next;

        cnt++;
    }

   if(temp->next==NULL)
   {
    Insertattail(tail,val);
    return ;
   }

    node* inode=new node(val);

    inode->next=temp->next;
    temp->next->prev=inode;
    temp->next=inode;
    inode->prev=temp;

     
}



 //DEletion of doubly linklist

 void Deeletion(node* &head, int position)
 {
       //deleting first or start node

    if(position == 1) {
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
 }





// ----Reverse the doublelinklist-----

node* ReveerseDoublyist(node* &head)
 {
    node* p1=head;
    node* p2=p1->next;
    
    p1->next=NULL;
    p1->prev=p2;
    
    while(p2!=NULL)
    {
        p2->prev=p2->next;
        p2->next=p1;
        
        p1=p2;
        p2=p2->prev;
    }
    head=p1;
    return p1;
 }





//--------Print the list------

void printlist(node*&head)
{
    int cnt=0;
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        cnt++;

       
    }
    cout<<endl;
    
}


int main()
{

  node* node1=new node(10);

  node* head=node1;
  node* tail=node1;
  

    Insertathead(head,15);
    printlist(head);


 Insertattail(tail,20);
  printlist(head);


Insertatanyposition(tail,head,1,34);
printlist(head);

Insertatanyposition(tail,head,2,47);
printlist(head);

Deeletion(head,2);
printlist(head);

ReveerseDoublyist(head);
printlist(head);

}















//------Check wheather the list is circular or not---



/*
#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;

    node(int val) {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

bool checkedcircularlist(node* &head) //---- use this function in any where and try to solve any type of list--- logic is same---
{
    if (head == NULL) {
        return false;
    }

    node* temp = head->next;

    while (temp != NULL && temp != head) {
        temp = temp->next;
    }

    return (temp == head);
}

void Insertathead(node* &head, int val) {
    node* temp = new node(val);

    if (head == NULL) {
        head = temp;
    }

    temp->next = head;
    temp->prev = NULL;
    head->prev = temp;
    head = temp;
}

int main() {
    node* node1 = new node(10);

    node* head = node1;

    // Create a circular linked list
    Insertathead(head, 15);
    Insertathead(head, 20);
    head->next->next->next = head; // Make it circular

    if (checkedcircularlist(head)) {
        cout << "List is circular" << endl;
    } else {
        cout << "List is not circular" << endl;
    }

    return 0;
}


*/