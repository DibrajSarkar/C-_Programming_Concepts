#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int mx=ar[0];
    // taking input into the array
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    // traverse value
    for(int i=0;i<n;i++){
        mx=max(ar[],n);
        cout<<"Index - "<<i<<"-> "<<mx<<endl;
    }
    cout<<mx<<endl;
    return 0;
}
