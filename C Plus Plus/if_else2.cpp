#include<bits/stdc++.h>
using namespace std;
int main()
{    int x;
    cin>>x;
    if(x%2==0){
        if(x<10){
            cout<<"Even and Less than "<<x<<endl;
        }
        else{
            cout<<"Even and greater than or equal "<<x<<endl;
        }
    }

    else{
        cout<<"Odd Number"<<endl;
    }
    return 0;
}
