#include<iostream>
using namespace std;

int top=-1;
int ls[100];
int us[100];
int quicksort(int a[],int beg,int endd);
void quick(int a[],int n)
{
    int beg,endd,loc;
    if(n>1)
    {
        top=top+1;
        ls[top]=1;
        us[top]=n;
    }
    while(top!=-1)
    {
        beg=ls[top];
        endd=us[top];
        top=top-1;
        loc=quicksort(a,beg,endd);
        if(beg<loc-1)
        {
            top=top+1;
            ls[top]=beg;
            us[top]=loc-1;
        }
        if(loc+1<endd)
        {
            top=top+1;
            ls[top]=loc+1;
            us[top]=endd;
        }
    }
}
int quicksort(int a[],int beg,int endd)
{
    int left,right,loc,temp;
    left=beg;
    right=endd;
    loc=beg;
    while(1)
    {
      while(a[loc]<=a[right] && loc!=right)
            right=right-1;
            if(loc==right)
            {
                return loc;
            }
            else
            {
                temp=a[loc];
                a[loc]=a[right];
                a[right]=temp;
                loc=right;
            }
     while(a[loc]>=a[left] && loc!=left)
            left=left+1;
            if(loc==left)
            {
                return loc;
            }
            else
            {
                temp=a[loc];
                a[loc]=a[left];
                a[left]=temp;
                loc=left;
            }

    }

}
int main()
{
    int a[100],n,i;
    cout<<"Enter the no of elements";
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    quick(a,n);
    cout<<endl;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
}
