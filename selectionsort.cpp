#include<iostream>
using namespace std;

int smaller(int a[],int k,int n)
{
    int s,pos,i;
    s=a[k];
    pos=k;
    for (int i=k+1;i<=n;i++)
    {
        if(s>a[i])
        {
            s=a[i];
            pos=i;
        }
    }
    return pos;
}
void selectionsort(int a[],int n)
{
    int k,j,temp,p;
    for(k=1;k<=n-1;k++)
    {
        p=smaller(a,k,n);
        if(k!=p)
        {
            temp=a[k];
            a[k]=a[p];
            a[p]=temp;
        }

    }
    for(k=1;k<=n;k++)
        cout<<a[k]<<" ";
}
int main()
{
    int n,i,a[10];
    cout<<"Enter the no of elements";
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    selectionsort(a,n);

}
