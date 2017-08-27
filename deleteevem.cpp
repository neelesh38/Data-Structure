#include<iostream>
using namespace std;

struct node
{
    int data;
    node * next;

}*Head;
struct node1
{
    int data1;
    node1 *next1;
}*Head1;

class linklist
{

public:
    linklist()
    {
        Head=NULL;
        Head1=NULL;
    }
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
    void insertAtBeg1(int val)
    {
        node1 *temp;
        temp=new node1;
        temp->data1=val;
        temp->next1=NULL;
        if(Head1!=NULL)
            temp->next1=Head1;
        Head1=temp;
    }
    void even()
    {
      node *temp,*step,*prev,*t;
      //t=Head;
      while(Head!=NULL && Head->data%2==0)
      {
          temp=Head;
          int v=temp->data;
          //cout<<"delete val: "<<v<<endl;
          Head=Head->next;
          delete temp;
      }
      step=Head;
      while(step!=NULL)
      {
          if(step->data%2==0)
          {
              temp=step;
              int v=temp->data;
              cout<<"deleted1"<<v<<endl;
              insertAtBeg1(v);
              step=step->next;
              prev->next=step;
          }
          else
          {
              prev=step;
              step=step->next;
          }
      }
      step=NULL;
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
    void display1()
    {
        node1 *temp;
        temp=Head1;
        while(temp!=NULL)
        {
            cout<<temp->data1<<" ";
            temp=temp->next1;
        }
    }
};
int main()
{
    linklist l;
    l.insertAtBeg();
    l.insertAtBeg();
    l.insertAtBeg();
    l.insertAtBeg();
    l.insertAtBeg();
    l.display();
    cout<<endl;
    l.even();
    cout<<"List all del value";
    l.display();
    cout<<"Other list:"<<endl;
    l.display1();


}
