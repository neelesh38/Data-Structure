#include<iostream>
using namespace std;
#define MAX 50
int queue[MAX];
int rear=-1;
int front=-1;
void insert()
{
    int val;
    if(rear==MAX-1)
    {
        cout<<"overflow";
        return;
    }
    front=0;
    cout<<"Enter the val";
    cin>>val;
    rear=rear+1;
    queue[rear]=val;
}
void delete1()
{
    if(front==-1 ||front >rear)
    {
        cout<<"underflow";
        return;
    }
    cout<<"delete element"<<queue[front];
    front=front+1;

}
void display()
{
    int i;
    if(front==-1)
    {
        cout<<"empty"<<endl;
        return;
    }
    for(i=front;i<=rear;i++)
        cout<<queue[i]<<" ";
}
int main()
{
    int ma,val,n;
      while(1)
   {
       cout<<"1.Insert Element\n2.Delete Element\n3.display\n"<<endl;
       cin>>n;
       switch(n)
       {
        case 1:
        insert();
        break;
        case 2:delete1();
        break;
        case 3:display();
        break;
        default:("You Enter wrong input");
       }
   }
}
