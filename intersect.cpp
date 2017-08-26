#include<iostream>
using namespace std;

struct node
{
    char data;
    node *next;
}*start=NULL,*start1=NULL;
    void insertend(node *&s,char val)
    {
        node *temp;
        temp=new node;
        temp->data=val;
        temp->next=NULL;
        if(s==NULL)
        {
            temp->next=s;
            s=temp;
            return;
        }
        node *ptr=s;
        while(ptr->next!=NULL)
            ptr=ptr->next;
        ptr->next=temp;
    }
 void display(node *&s)
 {
     node *temp;
     temp=s;
     while(temp!=NULL)
     {
         cout<<temp->data<<" ";
         temp=temp->next;
     }
 }
int x=0;
 void intersectlist(node *s,node *d)
 {
     node *temp,*temp1;
     node *ptr;
     temp=s;
     ptr=d;
     temp1=s;

     /*while(temp1!=NULL)
     {
         cout << temp1->data << "->";
         temp1=temp1->next;
     }*/
     while(ptr!=NULL)
     {

         while(temp!=NULL)
         {
             if(temp->data!=ptr->data)
             {
                 //ptr->next=ptr->next->next;
                x=1;
             }
             else
             {
                 x=0;
                 break;
                 //ptr=ptr->next;

             }
             temp=temp->next;
         }

         if(x==0)
         {
             cout << ptr->data << "->";
         }
         x=0;
         ptr=ptr->next;
         temp=start;


     }
    cout << "NULL" << endl;
 }
/* void unionlist(node *s,node *d)
 {
     node *temp,*temp1;
     temp=s;
     while(temp!=NULL)
     {
         temp1=d;
         while(temp1!=NULL)
         {
             if(temp1->next->data=temp->next->data)
             {
                 temp1->next=temp1->next->next;
             }
             else
             {
                 temp1=temp1->next;
             }
         }
         temp=temp->next;
     }
 }*/
int main()
{
    char c;
    cin>>c;
    while(c!='$')
    {
        insertend(start,c);
        cin>>c;
    }

    cin>>c;
    while(c!='$')
    {
        insertend(start1,c);
        cin>>c;
    }
//display(start1);
    intersectlist(start,start1);
    display(start);
    display(start1);

}

