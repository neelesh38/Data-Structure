#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*Head;

class cirlist
{
public:
    cirlist()
    {
        Head=NULL;
    }
    void InsertBeg()
    {
        node *temp,*ptr;
        int val;
        cout<<"enter the val";
        cin>>val;
        temp=new node;
        temp->data=val;
        temp->next=NULL;
        if(Head==NULL)
        {
            Head=temp;
            temp->next=Head;
        }
        else
        {
            ptr=Head;
            while(ptr->next!=Head)
            {
                ptr=ptr->next;
            }
            ptr->next=temp;
            temp->next=Head;
            Head=temp;
        }
    }
    void insertEnd()
    {
        int val;
        node *temp,*ptr;
        temp=new node;
        cout<<"Enter the no";
        cin>>val;
        temp->data=val;
        temp->next=NULL;
        if(Head==NULL)
        {
            Head=temp;
            temp->next=Head;
        }
        else
        {
            ptr=Head;
            while(ptr->next!=Head)
            {
                ptr=ptr->next;
            }
            ptr->next=temp;
            temp->next=Head;
        }
    }
    void insertPos()
    {
        int pos,val,i;
        cout<<"Enter the pos";
        cin>>pos;
        cout<<"Enter the val";
        cin>>val;
        node *temp,*ptr;
        temp=new node;
        temp->data=val;
        temp->next=NULL;
        if(pos==1)
        {
            ptr=Head;
            while(ptr->next!=Head)
            {
                ptr=ptr->next;
            }
            ptr->next=temp;
            temp->next=Head;
            Head=temp;
            return;
        }
        node *t=Head;
        for(i=0;i<pos-2;i++)
        {
            t=t->next;
        }
        temp->next=t->next;
        t->next=temp;

    }
    void deleteBeg()
    {
        node *temp;
        temp=Head;
        while(temp->next!=Head)
        {
            temp=temp->next;
        }
        Head=Head->next;
        temp->next=Head;
    }
    void deleteEnd()
    {
        node *temp;
        temp=Head;
        while(temp->next->next!=Head)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }

    void display()
    {
        node *ptr;
        ptr=Head;
        cout<<ptr->data<<" ";
        ptr=ptr->next;
            while(ptr!=Head)
            {
                cout<<ptr->data<<" ";
                ptr=ptr->next;
            }

    }
    void delval()
    {
        int val;
        cout<<"ENter the val";
        cin>>val;
        node *temp=Head,*prev;
        while(temp->data!=val)
        {
            if(temp->next==Head)
            {
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        if(temp->next==Head)
        {
            Head=NULL;
            return;
        }
        if(temp==Head)
        {
            prev=Head;
            while (prev -> next != Head)
            prev = prev -> next;
            Head = temp->next;
            prev->next = Head;
        }
        else if (temp -> next == Head)
    {
        prev->next = Head;
        //free(curr);
    }
    else
    {
        prev->next = temp->next;
        //free(curr);
    }

    }
};
int main()
{
    cirlist l;
    l.InsertBeg();
    //l.display();
    l.InsertBeg();
    l.InsertBeg();
    l.display();
    l.insertEnd();
    l.display();
    l.insertPos();
    l.display();
    //l.deleteBeg();
    //cout<<"delete"<<endl;
    //l.display();
    l.delval();
    cout<<"delete at last"<<endl;
    l.display();
}
