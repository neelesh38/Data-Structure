#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*Head;

class swapnode
{
public:
    swapnode()
    {
        Head=NULL;
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
        if(Head !=NULL)
            temp->next=Head;
        Head=temp;
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
    void swapn(int x,int y)
    {
        if(x==y)
            return;
        //Searchiing for X
        node *prevX=NULL;
        node *currX=Head;
        while(currX && currX->data!=x)
        {
            prevX=currX;
            currX=currX->next;
        }
        //Searching for Y
        node *prevY=NULL;
        node *currY=Head;
        while(currY && currY->data!=y)
        {
            prevY=currY;
            currY=currY->next;
        }
        //NOt present in list
        if(currX==NULL || currY==NULL)
                return;
        //if x is not head making y head
        if(prevX!=NULL)
            prevX->next=currY;
        else
            Head=currY;
        //if y is not head making x head
        if(prevY!=NULL)
            prevY->next=currX;
        else
            Head=currX;
         //Swapping
         node *temp;
         temp=currY->next;
         currY->next=currX->next;
         currX->next=temp;
    }
};
int main()
{
    swapnode s;
    s.insertBeg();
    s.insertBeg();
    s.insertBeg();
    s.insertBeg();
    s.display();
    s.swapn(1,2);
    cout<<endl;
    s.display();
}
