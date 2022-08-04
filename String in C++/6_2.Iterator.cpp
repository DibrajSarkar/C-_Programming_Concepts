#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st="abcdefghij";


    for( auto it=st.rbegin();it!=st.rend();it++){ // rbegin and  rend for use it use reverse iterator
        cout<<*it<<endl;
    }

    return 0;
}
