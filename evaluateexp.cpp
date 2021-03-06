#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int top=-1;
char stack[1000];
void push(char s)
{
    top=top+1;
    stack[top]=s;
}
char pop()
{
    if(top==-1)
    {
      return 0;
    }
    return stack[top--];
}
int main() {
    char t;
    string st;
     int n,i,j,flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>st;
        for(j=0;st[j]!='\0';j++)
        {
            t=st[j];
            if((top==-1)&& t==')'||t==']'||t=='}')
            {
                flag=1;
            }
            if(t=='('||t=='{'||t=='[')
            {
                push(t);
            }
            else if(t==')' && stack[top]=='(')
            {
                pop();
                flag=0;
            }

            else if(t==']' && stack[top]=='[')
            {
                pop();
                flag=0;
            }

            else if(t=='}' && stack[top]=='{')
            {
                pop();
                flag=0;
            }

        }
        if(top==-1 && flag==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        top=-1;
    }
}
