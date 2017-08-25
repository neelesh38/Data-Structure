#include<iostream>
#include<math.h>
using namespace std;
int top=-1;
void push(int stack[],int val)
{
    top=top+1;
    stack[top]=val;
}
void pop(int stack[],int val)
{
    int a,b,c;
    if(top==-1)
    {
        cout<<"stack is empty";
        return;
    }
    a=stack[top];
    b=stack[top-1];
    if(val=='+')
    {
        c=a+b;
    }
        if(val=='-')
    {
        c=b-a;
    }
        if(val=='/')
    {
        c=b/a;
    }
    top=top-1;
    top=top-1;
    push(stack,c);
}
int main()
{
    string s;
    cin>>s;
    int x;
    int stack[10];
    int i=0;
    while(x!='\0')
    {
        x=s[i];
        if(isdigit(x))
        {
            push(stack,x-'0');
        }
      else
        {
            pop(stack,x);
        }
        i++;
    }
    cout<<stack[top];
}
