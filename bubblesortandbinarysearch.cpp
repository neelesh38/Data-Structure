#include<iostream>
using namespace std;
void bubble(int a[],int n);
int binarysearch(int a[],int n,int v,int pos);
int main()
{
    int n,a[100],i,v,pos,re;
    cout<<"Enter the no of element";
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    bubble(a,n);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl<<"Enter the value to search = ";
    cin>>v;
    re=binarysearch(a,n,v,pos);
    cout<<"Value is present at = "<<re+1;
}
void bubble(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
int binarysearch(int a[],int n,int v,int pos)
{
    int i;
    int beg=1,en=n,mid=(beg+en)/2;
    while(beg<=en && a[mid]!=v)
    {
        if(v<a[mid])
            en=mid-1;
        else
            beg=mid+1;
        mid=(beg+en)/2;
    }
    if(a[mid]==v)
        pos=mid;
    else
        pos=NULL;
    return pos;
}
