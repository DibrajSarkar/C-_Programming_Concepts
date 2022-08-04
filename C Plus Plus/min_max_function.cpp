#include<bits/stdc++.h>
using namespace std;

int main()
{
int a,b,c,d,mn,mx;
scanf("%d %d %d %d",&a,&b,&c,&d);

//if(a>b){
//    mx=a;
//}            WE use min() and max() function for working this types work
//else{
//    mx=b;
//}
int Min=min(a,min(b,min(c,d)));
int Max=max(a,max(b,max(c,d)));
cout<<"Min is: "<<Min<<endl;
cout<<"Max is: "<<Max <<endl;

printf("%d",mx);

return 0;
}
