#include<iostream>
using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;
}*start,*last;

class dlist
{
public:
    dlist()
    {
        start=NULL;
        last=NULL;
    }
    void insertBeg()
    {
        node *temp;
        int val;
        cout<<"Enter the val";
        cin>>val;
        temp=new node;
        temp->data=val;
        temp->next=NULL;
        temp->prev=NULL;
        if(start==NULL)
        {
            start=temp;
            last=temp;
        }
        else
        {
            temp->next=start;
            start->prev=temp;
            start=temp;
        }
    }
    void insertEnd()
    {
        int val;
        cout<<"Enter the val";
        cin>>val;
        node *temp;
        temp=new node;
        temp->data=val;
        temp->next=NULL;
        temp->prev=NULL;
        if(start==NULL)
        {
            start=temp;
            last=temp;
        }
        else
        {
            temp->prev=last;
            last->next=temp;
            last=temp;
        }
    }
    void insertAfter()
    {
        int pos,val;
        cout<<"Enter the pos";
        cin>>pos;
        cout<<"Enter the val";
        cin>>val;
        node *temp;
        temp=new node;
        temp->data=val;
        temp->next=NULL;
        temp->prev=NULL;
        if(start==NULL)
        {
            cout<<"List is empty";
            temp->prev=temp->next=NULL;
            start=temp;
        }
        else
        {
            node *ptr=start,*temp2;
            while(ptr->data!=pos)
            {
                if(ptr->next==NULL)
                {
                    cout<<"pos no found";
                    return;
                }
                else
                {
                  ptr=ptr->next;
                }
            }
            temp2=ptr->next;
            ptr->next=temp;
            temp->prev=ptr;
            temp->next=temp2;
            temp2->prev=temp;
        }
    }
    void display()
    {
        node *temp;
        temp=start;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void deleteBeg()
    {
        node *temp;
        temp=start;
        if(start==NULL)
        {
            cout<<"List is Empty";
            return;
        }
        if(temp->prev==temp->next)
        {
            start=NULL;
        }
        else
        {
            start=temp->next;
            start->prev=NULL;
        }
    }
    void deleteEnd()
    {
        node *temp;
        temp=last;
        if(start==NULL)
        {
            cout<<"List is Empty";
            return;
        }
        last=temp->prev;
        last->next=NULL;
    }
    void delval()
    {
        int val;
        cout<<"Enter the val";
        cin>>val;
        if(start==NULL)
        {
            cout<<"list is empty";
            return;
        }
        node *temp;
        temp=start;
        while(temp->data!=val)
        {
            if(temp->next==NULL)
                cout<<"Value not found";
            else
                temp=temp->next;
        }
        if(start==temp)
        {
            start=NULL;
        }
        else
            temp->prev->next=temp->next;
    }
};
int main()
{
    int n;
    dlist l;
    while(1)
    {
    cout<<endl<<"1.Insert at beg\n2.Insert At End\n3.Insert After Pos\n4.Delete at Beg\n5.Delete At end\n6.Delete By val\n7.Display"<<endl;
    cin>>n;
    switch(n)
    {
        case 1:l.insertBeg();
        break;
        case 2:l.insertEnd();
        break;
        case 3:l.insertAfter();
        break;
        case 4:l.deleteBeg();
        break;
        case 5:l.deleteEnd();
        break;
        case 6:l.delval();
        break;
        case 7:l.display();
        break;
    }
    }
}
