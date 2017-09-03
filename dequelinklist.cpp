#include<iostream>
using  namespace std;
int top1=0;
int top2=0;
struct node
{
    int data;
    node *prev;
    node *next;
}*start,*last;

class deq
{
public:
    deq()
    {
        start=NULL;
        last=NULL;
    }
    void insertBeg()
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
            temp->next=start;
            start->prev=temp;
            start=temp;
        }

    }
    void insertlast()
    {
        int val;
        node *temp;
        temp=new node;
        cout<<"Enter the val";
        cin>>val;
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
    void delBeg()
    {
        node *temp;
        temp=start;
        start=temp->next;
        temp->prev=NULL;
    }
    void delEnd()
    {
        node *temp;
        temp=last;
        last=last->prev;
        temp->next=NULL;
    }
    void disbeg()
    {
        node *temp;
        temp=start;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void disEnd()
    {
        node *temp;
        temp=last;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
        cout<<endl;
    }
};
int main()
{
    int n;
    deq d;
    {
        while(1)
        {
            cout<<"1.insert at beg\n2.Insert at last\n3.del at beg\n4.del at last\n5.display beg\n6.display end\n";
            cin>>n;
            switch(n)
            {
                case 1:
                    d.insertBeg();
                    top1++;
                    break;
                case 2:
                    d.insertlast();
                    top2++;
                    break;
                case 3:
                    d.delBeg();
                    top1--;
                    break;
                case 4:
                    d.delEnd();
                    top2--;
                    break;
                case 5:
                    d.disbeg();
                    break;
                case 6:
                    d.disEnd();
                    break;

            }
        }
    }
}

