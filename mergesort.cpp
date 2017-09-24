#include<iostream>
using namespace std;

void mergearray(int a[],int beg,int mid,int endd)
{
    int b[100],i,j,k;
    for(i=beg;i<=endd;i++)
    {
        b[i]=a[i];
    }
    i=beg;
    j=mid+1;
    k=beg;
    while((i<=mid) && (j<=endd))
    {
        if(b[i]<b[j])
        {
            a[k]=b[i];
            k++;
            i++;
        }
        else
        {
            a[k]=b[j];
            k++;
            j++;
        }
    }
    if (i>mid)
    {
        while(j<=endd)
        {
            a[k]=b[j];
            k++;
            j++;
        }
    }
    if(j>endd)
    {
        while(i<=mid)
        {
            a[k]=b[i];
            k++;
            i++;
        }
    }
}
void mergesort(int a[],int beg,int endd)
{
    int mid;
    if(beg<endd)
    {
        mid=(beg+endd)/2;
        mergesort(a,beg,mid);
        mergesort(a,mid+1,endd);
        mergearray(a,beg,mid,endd);
    }
}
int main()
{
    int i,n,a[100];
    cout<<"Enter the no of elements";
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    mergesort(a,1,n);
    cout<<endl;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
}
