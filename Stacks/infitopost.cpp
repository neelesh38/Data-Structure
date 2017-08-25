#include<iostream>
using namespace std;
char stack[100];
int top=-1;
void push(char val)
{
    top=top+1;
    stack[top]=val;
}
int prec(char val)
{
    if(val=='*' || val =='/')
        return 5;
    else if(val=='+' || val =='-')
        return 3;
    return 0;
}
char peakvalue()
{
    return stack[top];
}
char pop()
{
    if(top==-1)
    {
        cout<<"list is empty";
        return 0;
    }
    return stack[top--];
}
int main()
{
    char t;
    int i;
    string infix;
    string postfix="";
    cin>>infix;
    infix=infix+')';
    push('(');
    for(i=0;infix[i]!='\0';i++)
    {
        t=infix[i];
        if(t=='(')
        {
            push(t);
        }
        else if(t=='+'||t=='-' ||t=='*'||t=='/')
        {
            while(prec(peakvalue())>=prec(t))
            {
                postfix=postfix+pop();
            }
            push(t);
        }
        else if(t==')')
        {
            while(peakvalue()!='(')
            {
                postfix=postfix+pop();
            }
            pop();
        }
        else
            postfix=postfix+t;
    }
    cout<<postfix;
}
