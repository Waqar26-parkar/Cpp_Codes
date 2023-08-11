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

void Insertattail(node* &tail,int val)
{

    node* temp=new node(val);
    tail->next=temp; 
    temp->prev=tail;
    temp->next=NULL;
    tail=temp;
}

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


void printlist(node *head)
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


}
