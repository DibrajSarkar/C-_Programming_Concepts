#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="ab cd ef gh ij";
    stringstream stream(s);
    stream<<s;// stream theke akta akta kore ber korar jonno
    string w;
    while(stream>>w)
    {
        cout<<w<<endl;
    }

    return 0;
}
