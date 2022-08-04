#include<bits/stdc++.h>
using namespace std;
int print(int *x)
{
   *x=2500;
}
int main()
{
    int a;
    cin>>a;
    int *ptr=&a;
    int a=print(*ptr);
    cout<<a<<endl;



    return 0;
}
