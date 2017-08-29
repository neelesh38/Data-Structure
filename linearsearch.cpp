#include<iostream>
using namespace std;
void linear(int a[],int n,int v);
int main()
{
    int n,a[100],i,result,v;
   cout<<"Enter the no of elements";
   cin>>n;
   for(i=0;i<n;i++)
        cin>>a[i];
   cout<<"Enter the value of search";
   cin>>v;
   linear(a,n,v);
}
void linear(int a[],int n,int v)
{
    int pos,i,flag=0;
   for(i=0;i<n;i++)
   {
       if(a[i]==v)
       {
          flag=1;
          pos=i;

       }

    }
   if(flag==0)
    cout<<"Element no found";
   else
    cout<<pos;
}

