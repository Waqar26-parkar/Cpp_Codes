#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;

   // Constructor   
    node(int val)
    {
      this->data= val;
      this->next=NULL;
    }

    //Destructor    
    ~node()
    {
       
       
       if(this->next!=NULL)
       {
               delete next;
               this->next=NULL;
       }

    }
};


void Insertathead(node* &head , int val)
{
  node* temp=new node(val);

    if(head==NULL)    // This is the base condition ( if koi node nhi hogi then temp hi start node hogi)
    {
        head=temp;
    }

    
    temp->next= head;
    head=temp;

}


void printlist(node* &head){
    
    int count=0;
    node* temp=head;
    while(temp!=NULL)
    {

        cout<<temp->data<<" ";
        temp=temp->next;
        count++;
    }

    cout<<endl;
    // cout<<count<<endl;
}


void Insertattail(node* &tail, int val)
{
    node* temp=new node(val);
    tail->next=temp;
    tail=temp;


}


void InsertatanyPosition(node* &tail, node *&head ,int position, int val)
{

    if(position==1)   // Inserting at haead
    {
        Insertathead(head,val);
        return ;
    }


       
    node* temp=head;   

    int cnt=1;

    while(cnt<position-1)
    {
        temp=temp->next;

        cnt++;
    }

// Inserting at tail or end

   if(temp->next==NULL)
   {
    Insertattail(tail,val);
    return ;
   }


//Insert at any position

   node* node2=new node(val);
   node2->next=temp->next;
   temp->next=node2;



}

//Reverse the linklist

node* Reverselist(node* &head)
{

    node* curr=head;
    node* prev=NULL;
    node* forward=NULL;
    while(curr!=NULL)
    {
       forward=curr->next;
       curr->next=prev;
       prev=curr;
       curr=forward;
    }

    head = prev;
    
    return head;

}


//  Reverse the linklist using recursion..

node* Revrsethelinklist_usingrecursion(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    node* node2=Revrsethelinklist_usingrecursion(head->next);
    head->next->next=head;
    head->next=NULL;

    return node2;


}



// Deleting the node (Deletion)
void deleteionofnode(int position,node* &head)
{
    //Deleting the node at starting position
    if(position==1)
    {
       node* temp=head;
       head=head->next;
       temp->next=NULL;
       delete temp;

    }

    else
    {
        node* prev=NULL;
        node* curr=head;
         
        int cnt=1;
        while(cnt<position)
        {
           prev=curr;
           curr=curr->next;
           cnt++;
        }


        prev->next=curr->next;
        curr->next=NULL;

        delete curr;
    }

}





int main()
{

    node*node1= new node(10);

    // cout<<node1->data<<endl;
    // cout<<node1->next;


    node*head=node1;
    node*tail=node1;
   // node* 
 
    Insertathead(head,26);   //Inserting at head;
    printlist(head);
  
    Insertathead(head, 12);
    printlist(head);


    Insertattail(tail, 15);  //Inserting a tail;
    printlist(head);


    InsertatanyPosition(tail,head,1,34);  // Inserting at start     (In function at atanyposiiton)
    printlist(head);

    InsertatanyPosition(tail,head,6,74);  // Inserting at end      (In function at atanyposiiton)
    printlist(head);

    deleteionofnode(4,head);  // deleting the node at any position
    printlist(head);

    deleteionofnode(5,head);  // deleting the node at any position
    printlist(head);

    Reverselist(head);       // Reverse the linklist
    printlist(head);
    
    InsertatanyPosition(tail,head,6,74);  // Inserting at end      (In function at atanyposiiton)
    printlist(head);

    node* newhead=Revrsethelinklist_usingrecursion(head);  // Reverse the linklist using recursion
    printlist(newhead);

    return 0;
}