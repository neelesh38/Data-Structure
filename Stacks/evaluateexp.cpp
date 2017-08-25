#include<iostream>
using namespace std;
char stack[100];
int top=1;
void push(char val)
{
    top=top+1;
    stack[top]=val;
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
/*char peakvalue()
{
    return stack[top];
}*/
int main()
{
    int i,flag=0;
    char t;
    string s="{[()]}";
    for (i=0;s[i]!='\0';i++)
    {
        t=s[i];
        if(t=='('||t=='{'||t=='[')
            {
                push(t);
            }
        else if(t==')' && stack[top]=='(')
            pop();
        else if(t=='}' && stack[top]=='{')
            pop();
        else if(t==']' && stack[top]=='[')
            pop();
    }
    if(pop()==0)
        cout<<"bal";
         else
            cout<<"not bal";



}
