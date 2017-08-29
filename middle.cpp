#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*Head;

class abc
{
public:
    abc()
    {
        Head=NULL;
    }
    void insertEnd(int val)
    {
        node *temp;
        temp=new node;
        temp->data=val;
        temp->next=NULL;
        if(Head==NULL)
        {
            temp->next=Head;
            Head=temp;
            return;
        }
        node *ptr=Head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
        void display()
        {
            node *ptr;
            ptr=Head;
            while(ptr!=NULL)
            {
                cout<<ptr->data<<" ";
                ptr=ptr->next;
            }
        }
        void middle()
        {
            node *slptr=Head;
            node *ftptr=Head;
            if(Head!=NULL)
            {
                while(ftptr!=NULL && ftptr->next!=NULL)
                {
                    ftptr=ftptr->next->next;
                    slptr=slptr->next;
                }
                cout<<"middle elemt"<<slptr->data;
            }
        }
};
int main()
{
    int val;
    abc a;
    while(1)
    {
        cout<<"Enter the val";
        cin>>val;
        if(val==-1)
            break;
        else
        {
            a.insertEnd(val);
        }
    }
    a.display();
    a.middle();
   a.display();
}
