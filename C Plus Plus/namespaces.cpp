#include<bits/stdc++.h>
using namespace std;
namespace one
{
    int x=10;
    void fun()
    {
    cout<<"I'm namespace one"<<endl;
    }
}
namespace two
{
    int x=230;
    void fun3(){
    cout<<"I'm namespace two"<<endl;
    }
}

int main()
{

    cout<<one::x<<endl;
    cout<<two::x<<endl;

    return 0;
}
