#include<iostream>
using namespace std;

struct stack
{
    int data[100];
    int top;

}stack;
void push(stack *s ,int x)
{
    s->top=s->top+1;
    s->data[s->top]=x;
}
int pop(stack *s)
{
    int x;
    x=s->data[s->top];
    s->top=s->top-1;
    return x;
}
int empty(stack *s)
{
 if(s->top==-1)
      return(1);
 return(0);
}
//----------------------
int full(stack *s)
{
 if(s->top==MAX-1)
     return(1);
 return(0);
}
int main()
{
    stack s;
    s.top=-1;
    cout<<"Enter the decimal";
    cin>>num;
    while(num!=0)
    {
        if(!full(&s))
        {
          push(&s,num%2);
        num=num/2;

        }
        else
            cout<<"list is empty";
    }
    while(!empty(&s))
    {
        num=pop(&s);
        cout<<num;
    }
}
