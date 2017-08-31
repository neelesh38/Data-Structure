#include<iostream>
using namespace std;
#define MAX 6
int queue[MAX];
int rear=-1;
int front=-1;
void insert()
{

    int val;
    cout<<"Enter the val";
    cin>>val;
    if((rear==MAX-1 && front==0)||(rear==front-1))
    {
        cout<<"overflow";
        return;
    }
    else if(front==-1 && rear==-1)
    {
      front=0;
      rear=0;
      queue[rear]=val;
    }
    else
    {
     rear=rear+1;
     queue[rear]=val;
    }


}
void delete1()
{
    if(front==-1 ||front >rear)
    {
        cout<<"underflow";
        return;
    }
    if(front==rear)
    {
        front=rear=-1;
    }
    if(front==MAX-1)
    {
        front=0;
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

        cout<<"rear"<<endl;
        for (i=0;i<rear;i++)
            cout<<queue[i]<<" ";
        cout<<"front"<<endl;
        for (i=front;i<MAX;i++)
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
