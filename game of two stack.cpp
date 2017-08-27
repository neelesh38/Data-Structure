#include <bits/stdc++.h>

using namespace std;

int main(){
    int g;
    cin >> g;
    for(int a0 = 0; a0 < g; a0++){
        int n;
        int m;
        int x;
        cin >> n >> m >> x;

        vector<int> a(n);
        for(int a_i = 0; a_i <n; a_i++){
           cin >> a[a_i];
        }

        vector<int> b(m);
        for(int b_i =0; b_i <m; b_i++){
           cin >> b[b_i];
        }

        int sum=0,count=0,temp=0,i=0,j=0;

        while(i<n && sum+a[i]<=x){    //considering only first stack and calculating count
            sum+=a[i];
            i++;
        }
        count=i;

        while(j<m && i>=0){          //now adding one element of second stack at a time and subtracting the top element of first stack and calculating the count
            sum+=b[j];
            j++;
            while(sum>x && i>0){
                i--;
                sum-=a[i];
            }
            if(sum<=x && i+j>count)
                count=i+j;
        }
        cout<<count<<endl;
    }
    return 0;
}
