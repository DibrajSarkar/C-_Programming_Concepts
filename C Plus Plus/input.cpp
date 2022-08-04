#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int s[5];
    cout<<"Enter Two Number"<<endl;
    cin>>a>>b;
    cout<<"Sum of "<<a <<" and "<< b<<" is"<<"="<<a+b<<endl;
    for(int i=0;i<5;i++){
        cin>>s[i];
    }
    for(int i=0;i<5;i++){
        cout<<s[i]<<" ";
    }


    return 0;
}
