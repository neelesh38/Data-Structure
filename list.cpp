#include<iostream>
using namespace std;

struct node
{
    int data;
    node * next;
}*Head;

class linklist
{
public:
    linklist()
    {
        Head=NULL;
    }
 //Insertion
    void insertAtBeg()
    {
        int val;
        cout<<"Enter the no"<<endl;
        cin>>val;
        node *temp;
        temp=new node;
        temp->data=val;
        temp->next=NULL;
        if(Head!=NULL)
            temp->next=Head;
        Head=temp;
    }
    void insertAtEnd()
    {
        int val;
        node *temp,*t;
        temp=new node;
        if(Head == NULL)
        {
            insertAtBeg();
            return;
        }
        cout<<"Enter the no";
        cin>>val;
        temp->data=val;
        temp->next=NULL;
        t=Head;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=temp;
    }
    void insertAtPos()
    {
        int pos,val,i;
        cout<<"Enter the pos";
        cin>>pos;
        cout<<"Enter the value";
        cin>>val;
        node *temp,*t;
        temp=new node;
        temp->data=val;
        temp->next=NULL;
        if(pos==1)
        {
            temp->next=Head;
            Head=temp;
            return;
        }
        t=Head;
        for(i=0;i<pos-2;i++)
        {
            t=t->next;
        }
        temp->next=t->next;
        t->next=temp;

    }
//Deletion
    void delAtBeg()
    {
        node *temp;
        temp=Head;
        if(Head ==NULL)
        {
            cout<<"List is Empty";
            return;
        }
        Head=Head->next;
        int v=temp->data;
        delete temp;
        cout<<"Deleted val is "<<v;
    }
    void delAtEnd()
    {
        node *temp;
        temp=Head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        delete temp;
    }
    void delAtPos()
    {
        int pos,i;
        cout<<"Enter the pos to del";
        cin>>pos;
        node *temp,*temp1;
        temp=Head;
        if(pos==1)
        {
            Head=temp->next;
            delete temp;
            return;
        }
        for(i=0;i<pos-2;i++)
        {
            temp=temp->next;
        }
        temp1=temp->next;
        temp->next=temp1->next;
        delete temp;
    }
    void delAtVal()
    {
        int val;
        cout<<"Enter the val";
        cin>>val;
        if(Head==NULL)
            cout<<"List is Empty";
        else
        {
            if(Head->data==val)
            {
                node *ptr=Head;
                Head=Head->next;
                delete ptr;
            }
            else
            {
                node *ptr=Head;
                node *ptr1=Head->next;
                while(ptr1->data !=val && ptr1!= NULL)
                {
                    ptr=ptr1;
                    ptr1=ptr1->next;
                }
                if(ptr1->data==val)
                {
                    ptr->next=ptr1->next;
                    delete ptr1;
                }
                else
                {
                    cout<<"Not Found";
                }
            }
        }
    }
    //Searching
    void searchAtPos()
    {
        node *temp,*t;
        int val,pos=1;
        cout<<"Enter the value";
        cin>>val;
        temp=Head;
        t=Head;
        while(temp!=NULL && t->data!=val)
        {
            t=temp;
            t=t->next;
            pos++;
        }
        if(t!=NULL)
        {
            Head=t;
            t=t->next;
            cout<<"Found at Pos"<<pos;
        }
        else
            cout<<"Not Found";
    }
    void display()
    {
        node *temp;
        temp=Head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main()
{
    int n;
    linklist l;
    while(1)
    {
    cout<<endl<<"1.Insert at beg\n2.Insert At End\n3.Insert At Pos\n4.Delete at Beg\n5.Delete At end\n6.Delete at Pos\n7.Delete By val\n8.Searching at Pos\n9.Display"<<endl;
    cin>>n;
    switch(n)
    {
        case 1:l.insertAtBeg();
        break;
        case 2:l.insertAtEnd();
        break;
        case 3:l.insertAtPos();
        break;
        case 4:l.delAtBeg();
        break;
        case 5:l.delAtEnd();
        break;
        case 6:l.delAtPos();
        break;
        case 7:l.delAtVal();
        break;
        case 8:l.searchAtPos();
        break;
        case 9:l.display();
        break;
    }
    }
}
