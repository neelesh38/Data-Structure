#include<iostream>
using namespace std;

void insertionsort(int a[],int n)
{
    int k,j,temp;
    for(k=2;k<=n;k++)
    {
        temp=a[k];
        //cout<<"temp"<<temp;
        j=k-1;
        while(temp<a[j] && j>0)
        {

            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
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
    insertionsort(a,n);

}
